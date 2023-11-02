#include <stdio.h>

int main() {
    int max = 12;
    for (int i = 0; i <= max; i++) {
        for (int j = 0; j <= max; j++) {
            printf("%3d ", i*j);
        }
        printf("\n");
    }
}