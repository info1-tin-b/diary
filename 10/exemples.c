#include <stdio.h>


int main() {
    int m[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", m[row][col]);
        }
        printf("\n");
    }
}