/*
Soit un tableau de 20x20 caractères. Écrire un programme qui dessine un 
cercle centrée dans le tableau. Le rayon du cercle est une variable.
Le cercle s'affiche avec des `*` et le reste avec des espaces.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define SIZE 20

int main() {
    int radius = 6;
    char m[SIZE][SIZE] = {0};

    // Initialise le tableau 
    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < SIZE; y++) {
            m[y][x] = '.';
        } 
    }

    // Remplir le cercle 
    #if 1
    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < SIZE; y++) {
            int c = SIZE/2;
            bool in_circle = pow(x - c, 2) + pow(y - c, 2) < radius * radius;
            m[y][x] = in_circle ? '*' : '.';
        } 
    }
    #else
    for (int angle = 0; angle < 360; angle++) {
        double rad = angle / 180.0 * 3.1415;
        int dx = radius * cos(rad);
        int dy = radius * sin(rad);
        const int center = SIZE / 2;
        m[center + dx][center + dy] = '*';
    }
    #endif

    // Affiche le tableau
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            printf("%c ", m[y][x]);
        } 
        puts("");
    }
}