#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Erreur: pas assez d'arguments\n");
        return -1;
    }

    double c;
    // 1. Source (chaine de caractère)
    // 2. Format (%lf pour double, %d pour des int)
    // 3. Destination &variable
    if (sscanf(argv[1], "%lf", &c) != 1) {
        printf("Erreur ce n'est pas valide\n");
        return 3;
    }

    if (c < 0) {
        printf("Erreur: valeur négative\n");
        return 4;
    }
}