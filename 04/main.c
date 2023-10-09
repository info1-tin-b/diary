#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Le nombre d'arguments passé au programme est : %d\n", argc);
    printf("Le nom du programme argv[0] est : %s\n", argv[0]);

    if (argc <= 1) {
        return 1;
    }
    printf("Le premier argument argv[1] est : %s\n", argv[1]);
    int value = atoi(argv[1]);
    printf("La valeur en entier de l'argument 1 est : %d\n", value);

    // SCANF
    int toto;
    scanf("%d", &toto);
    printf("La valeur de toto est : %d\n", toto);
    return 0;
}