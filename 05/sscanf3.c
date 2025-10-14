#include <stdio.h>

int main(int argc, char*argv[]) {
    if (argc < 2) {
        printf("Erreur\n");
        return 1;
    }

    int a, b; 
    // TOUJOURS TESTER LA VALEUR DE RETOUR DE SSCANF/SCANF
    if (sscanf(argv[1], "%d %d", &a, &b) != 2) {
        printf("Oops\n");
        return 1;
    }
    printf("La somme de %d et %d vaut %d\n", a, b, a + b);
}