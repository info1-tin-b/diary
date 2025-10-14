#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
 
    if (argc < 3) {
        printf("Erreur: pas assez d'arguments\n");
        return 1;
    }

    double a;
    if (sscanf(argv[1], "%lf", &a) != 1) {
        printf("Erreur: pas un nombre\n");
        return 2;
    }

    double b;
    if (sscanf(argv[2], "%lf", &b) != 1) {
        printf("Erreur: pas un nombre\n");
        return 3;
    }

    double result = a + b;
    printf("Résultat %lf\n", result);
    return 0;
}