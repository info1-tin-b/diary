#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define SIZE 5

int main() {
    int radius = 6;
    char m[SIZE][SIZE] = {0};

    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < SIZE; y++) {
            m[y][x] = '.';
        } 
    }

    // Initialise le tableau 
    m[0][0] = 'A';
    m[4][2] = 'B';
    m[4][3] = 'C';
    
    // Affiche le tableau
    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < SIZE; y++) {
            printf("%c ", m[y][x]);
        } 
        puts("");
    }
}