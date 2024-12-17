#include <stdio.h>

void transpose_copy(int m[3][3]) {
    int temp[3][3];
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            temp[col][row] = m[row][col];
        }
    }
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            m[row][col] = temp[row][col];
        }
    }    
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void transpose_swap(int m[3][3]) {
    for(int row = 0; row < 3; row++) {
        for(int col = row + 1; col < 3; col++) {
            swap(&m[row][col], &m[col][row]);
        }
    }    
}

void transpose_generic(int *m, int cols) {
    for(int row = 0; row < cols; row++) {
        for(int col = row + 1; col < cols; col++) {
            swap(&m[row * cols + col], &m[col * cols + row]);
        }
    }    
}

void display(int m[3][3]) {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) printf("%d ", m[row][col]);
        puts("");
    }
}

int main() {
    int m[][3] = {1,2,3,4,5,6,7,8,9};
    display(m);
    puts("------");
    transpose_generic((int*)m, 3);
    display(m);
}