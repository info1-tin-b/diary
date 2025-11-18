#include <stdio.h>

int main() {
    int a[5] = {0};

    const int size = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < size; i++) {
        printf("Entrez un nombre: ");
        scanf("%d", &(a[i]));
    }

    for (int i = size - 1; i >= 0; i--) {
        printf("%d, ", a[i]);
    }
}