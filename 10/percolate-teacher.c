#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h> // Pour la fonction usleep()

#define WIDTH (30)

/**
 * ANSI color sequences
 * http://www.lihaoyi.com/post/BuildyourownCommandLinewithANSIescapecodes.html
 */
#define WATER "\e[48;5;75m"
#define GROUND "\e[48;5;94m"
#define AIR "\e[48;5;136m"
#define RESET "\e[0m"

/**
 * Symbol used to display the matrix
 */
const char *symbols[3] = {AIR " " RESET, GROUND " " RESET, WATER " " RESET};

/**
 * Génère une matrice aléatoire
 */
void generate(int m[WIDTH][WIDTH]) {
  const double permeability = 1.6;
  for (int row = 0; row < WIDTH; row++)
    for (int col = 0; col < WIDTH; col++)
      m[row][col] = rand() > (double)RAND_MAX / permeability;
}

/**
 * Affiche la matrice
 */
void display(int m[WIDTH][WIDTH]) {
  for (int row = 0; row < WIDTH; row++) {
    for (int col = 0; col < WIDTH; col++)
      printf("%s%s", symbols[m[row][col] % 3], symbols[m[row][col] % 3]);
    printf("\n");
  }
}

/**
 * Efface l'affichage pour l'animation.
 */
void clear_screen() {
  printf("\e[1;1H\e[2J");
}

/**
 * Propage l'eau dans un étage donné.
 */
void propagate(int a[WIDTH]) {
  bool modified = false;
  do {
    modified = false;
    for (int i = 0, j = WIDTH; i < WIDTH - 1; i++, j--) {
      if (a[i] == 0 && a[i + 1] == 2) {
        a[i] = 2;
        modified = true;
      }
      if (a[j] == 0 && a[j - 1] == 2) {
        a[j] = 2;
        modified = true;
      }
    }
  } while (modified);
}

/**
 * Propage l'eau dans la matrice avec animation.
 */
bool percolate(int m[WIDTH][WIDTH], bool animate) {
  // Première ligne
  for (int col = 0; col < WIDTH; col++) {
    if (m[0][col] == 0)
      m[0][col] = 2;
  }

  // Propage l'eau
  for (int row = 1; row < WIDTH; row++) {
    for (int col = 0; col < WIDTH; col++) {
      if (m[row][col] == 0 && m[row - 1][col] == 2) {
        m[row][col] = 2;
      }
    }

    propagate(m[row]);

    if (animate) {
      clear_screen();
      display(m);
      usleep(100000); // Pause de 100ms pour l'animation
    }
  }

  // Test si la matrice percole
  bool does_percolate = false;
  int row = WIDTH - 1;
  for (int col = 0; col < WIDTH; col++) {
    does_percolate |= m[row][col] == 2;
  }
  return does_percolate;
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int m[WIDTH][WIDTH] = {0};
  generate(m);

  bool animate = false;
  if (argc > 1 && strcmp(argv[1], "--animate") == 0) {
    animate = true;
  }

  bool does_percolate = percolate(m, animate);
  if (!animate) {
    display(m);
  }

  printf("La matrice %s !\n", does_percolate ? "percole" : "ne percole pas");
}
