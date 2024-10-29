#include <stdio.h>

int main() {
    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
            printf("%8d", i * j);
        } 
        printf("\n");
    }
}