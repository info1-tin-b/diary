
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {

    if (argc < 3) {
        printf("Erreur: pas assez d'arguments!\n");
        exit(1);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int a0 = a;
    int b0 = b;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    printf("Le pgcd de %d et %d est %d\n", a0, b0, a);
}