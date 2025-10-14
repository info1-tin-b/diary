/**
 * Lire une valeur en argument
 * De la multiplier par 10
 * De l'afficher
 * 
 * Si aucune valeur n'est passée en argument:
 * Je prend la valeur par défaut 42.
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int value = 42;

    if (argc > 1) {
        if (sscanf(argv[1], "%d", &value) != 1) {
            printf("Erreur valeur invalide, "
                   "utilisation de %d\n", value);
        }
    }

    printf("%d\n", value * 10);
}