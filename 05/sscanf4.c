#include <stdio.h>

int main(int argc, char*argv[]) {
    if (argc < 2) {
        printf("Erreur, j'ai besoin d'au moins 1 argument\n");
        return 1;
    }

    int a; 
    if (sscanf(argv[1], "%d", &a) != 1) {
        printf("Erreur, le premier nombre est invalide!\n");
        return 1;
    }

    if (argc < 3) {
        printf("Erreur, j'ai besoin d'au moins 2 arguments\n");
        return 1;
    }

    int b;
    if (sscanf(argv[2], "%d", &b) != 1) {
        printf("Erreur, le deuxième nombre est invalide!\n");
        return 1;
    }
    printf("La somme de %d et %d vaut %d\n", a, b, a + b);
}