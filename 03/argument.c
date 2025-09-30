#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {

    int number = atoi(argv[1]);
    float floatnumber = atof(argv[2]);

    printf("Le nombre d'arguments est %d\n", argc);
    printf("La première valeur est : %d\n", number);
    printf("La seconde valeur est : >%5.2f<\n", floatnumber);
    return 0;
}