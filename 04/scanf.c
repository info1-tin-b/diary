#include <stdio.h>

int main() {
    int a = 1000, b = 1000;
    if (scanf("%d%d", &a, &b) != 2) {
        printf("Erreur de lecture\n");
        return 1;
    }
    printf("La valeur est %d %d\n", a, b);
}