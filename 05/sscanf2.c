#include <stdio.h>

int main() {
    char str[] = "123 3.1415 6.7.8";

    int a, b; 
    // TOUJOURS TESTER LA VALEUR DE RETOUR DE SSCANF/SCANF
    if (sscanf(str, "%d %d", &a, &b) != 2) {
        printf("Oops\n");
        return 1;
    }
    printf("La somme de %d et %d vaut %d\n", a, b, a + b);
}