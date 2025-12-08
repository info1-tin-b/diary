#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h> 

#define SIZE 10

void init(char matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            matrix[i][j] = (rand() % 5) > 2 ? '0': '1';
        }
    }
}

void solve(char matrix[SIZE][SIZE]) {
    int row = 0;
    
    // First line case
    for (int i = 0; i < SIZE; i++) {
        if (matrix[row][i] == '0')
            matrix[row][i] = '2';
    }

    row++;
    for (int col = 0; col < SIZE; col++) {
        if (matrix[row][col] == '0' && matrix[row - 1][col] == '2') 
            matrix[row][col] = '2';
    }
    for (int col = 0; col < SIZE - 1; col++) {
        if (matrix[row][col] == '2' && matrix[row][col + 1] == '0')
            matrix[row][col + 1] = '2';
    }
    for (int col = 1; col < SIZE; col++) {
        if (matrix[row][col - 1] == '2' && matrix[row][col] == '0')
            matrix[row][col] = '2';
    }    
}

void display(const char matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%c", matrix[i][j]);
        }
        puts("");
    }
}

int main() {
    char matrix[SIZE][SIZE] = {0};
    init(matrix);
    solve(matrix);
    display(matrix);
}