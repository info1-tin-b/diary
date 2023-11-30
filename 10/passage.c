#include <stdio.h>
#include <stdlib.h>

int saisie(int *n, int *m) {
    printf("Saisir un entier : ");
    if (scanf("%d", n) != 1) return 1;
    printf("Saisir un autre entier : ");
    if (scanf("%d", m) != 1) return 1;
    if (*n < 0 || *m < 0) return 2;
    return 0;
}

int main() {
    int u=23, v=42;
    #if 0
    if (saisie(&u, &v)) {
        fprintf(stderr, "Erreur de saisie\n");
        return 1;
    }
    #endif
    printf("u = %d, v = %d\n", u, v);
}