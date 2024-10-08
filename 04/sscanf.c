#include <stdio.h>

int main() {
    int a = 0;
    if (sscanf("42d", "%d", &a) != 1) {
        printf("Erreur de lecture\n");
        return 1;
    }
    printf("La valeur est %d\n", a);
}