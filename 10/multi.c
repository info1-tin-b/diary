#include <stdio.h>


int main() {
    int u[3][2] = { {2,3}, {5,6}, {7,8}};

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 2; y++) 
            printf("%d ", u[x][y]);
        putchar('\n');
    }

    int m[10][10];
    for (int x = 0; x < 10; x++) 
        for (int y = 0; y < 10; y++) 
            m[x][y] = x * y;

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) 
            printf("%3d ", m[x][y]);
        putchar('\n');
    }

}