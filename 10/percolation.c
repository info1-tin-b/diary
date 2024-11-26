#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 

void init(char matrix[10][10]) {
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            matrix[row][col] = rand() % 2;
        }
    }
}

void display(char matrix[10][10]) {
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(0));
    char matrix[10][10] = {0};
    init(matrix);

    // First line
    for (int col = 0; col < 10; col++) {
        if (matrix[0][col] == 0) {
            matrix[0][col] = 2;
        }
    }

    // Other lines
    for (int row = 1; row < 10; row ++) {
        for (int col = 0; col < 10; col++) {
            if (matrix[row][col] == 0 && matrix[row - 1][col] == 2) {
                matrix[row][col] = 2;
            }
        }
        bool changes = false;
        do {
            changes = false;
            for (int col = 0; col < 10; col++) {
                if (col - 1 >= 0 && 
                    matrix[row][col - 1] == 2 && 
                    matrix[row][col] == 0) {
                    matrix[row][col] = 2;
                    changes = true;
                }
                if (col + 1 < 10 && 
                    matrix[row][col + 1] == 2 && 
                    matrix[row][col] == 0) {
                    matrix[row][col] = 2;
                    changes = true;
                }                
            }        
        } while (changes);
    }

<<<<<<< HEAD
=======

>>>>>>> 0ae6cf4 (Week 10)
    display(matrix);
}