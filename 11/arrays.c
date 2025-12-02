#include <stdio.h>

#define SIZE 9

int main() {
    int a[SIZE];

    // Remplir le tableau
    for (int i = 0; i < SIZE; i++) {
        a[i] = i * 10;
    }

    // Afficher ce tableau
    for (int i = 0; i < SIZE; i++) {
        printf("%3d", a[i]); // *(a + i)
        if ((i+1) % 3 == 0) puts("");
    }    
}