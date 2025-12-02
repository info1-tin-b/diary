#include <stdio.h>

#define SIZE 5

void fill(int a[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            a[i][j] = (i * j);
        }
    }
}

void display(int a[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d", a[i][j]); // *(a + i)
        }
        puts("");
    }    
}

int main() {
    int a[SIZE][SIZE] = {0};

    fill(a);
    display(a);    
}