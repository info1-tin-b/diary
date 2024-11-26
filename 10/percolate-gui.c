#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <SDL2/SDL.h>

<<<<<<< HEAD
#define WIDTH (100*4)
#define CELL_SIZE (2)
=======
#define WIDTH (30*4)
#define CELL_SIZE (5)
>>>>>>> 5554fe8 (Week 10)
#define WINDOW_SIZE (WIDTH * CELL_SIZE)

#define AIR_COLOR 0xc79f8500
#define GROUND_COLOR 0x8f573200
#define WATER_COLOR 0x33a3ff00

void generate(int m[WIDTH][WIDTH]) {
    const double permeability = 1.6;
    for (int row = 0; row < WIDTH; row++)
        for (int col = 0; col < WIDTH; col++)
            m[row][col] = rand() > (double)RAND_MAX / permeability;
}

void render_matrix(SDL_Renderer *renderer, int m[WIDTH][WIDTH]) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    for (int row = 0; row < WIDTH; row++) {
        for (int col = 0; col < WIDTH; col++) {
            uint32_t color;
            switch (m[row][col] % 3) {
                case 0: color = AIR_COLOR; break;
                case 1: color = GROUND_COLOR; break;
                case 2: color = WATER_COLOR; break;
            }
            SDL_SetRenderDrawColor(renderer, (color >> 24) & 0xFF, (color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
            SDL_Rect cell = { col * CELL_SIZE, row * CELL_SIZE, CELL_SIZE, CELL_SIZE };
            SDL_RenderFillRect(renderer, &cell);
        }
    }

    SDL_RenderPresent(renderer);
}

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


bool percolate(SDL_Renderer *renderer, int m[WIDTH][WIDTH], bool animate) {
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
            render_matrix(renderer, m);
<<<<<<< HEAD
            SDL_Delay(10);
=======
            SDL_Delay(50);
>>>>>>> 5554fe8 (Week 10)
        }
    }

    bool does_percolate = false;
    int row = WIDTH - 1;
    for (int col = 0; col < WIDTH; col++)
        does_percolate |= m[row][col] == 2;
    return does_percolate;
}

int main(int argc, char *argv[]) {
    srand(time(NULL));

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "Erreur d'initialisation SDL: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow(
        "Percolation Simulation",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        WINDOW_SIZE, WINDOW_SIZE,
        SDL_WINDOW_SHOWN
    );

    if (!window) {
        fprintf(stderr, "Erreur de création de fenêtre: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        fprintf(stderr, "Erreur de création de renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    int m[WIDTH][WIDTH] = {0};
    generate(m);

    bool animate = argc > 1 && strcmp(argv[1], "--animate") == 0;
    bool does_percolate = percolate(renderer, m, animate);

    if (!animate) render_matrix(renderer, m);

    printf("La matrice %s !\n", does_percolate ? "percole" : "ne percole pas");

    SDL_Event event;
    bool running = true;
    while (running)
        while (SDL_PollEvent(&event))
            running &= event.type != SDL_QUIT;

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
