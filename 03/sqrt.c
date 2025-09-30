#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Erreur, tu n'as pas donné de valeurs !\n");
        return 1;
    }

    float result = sqrt(atof(argv[1]));
    printf("La racine carrée est : %f\n", result);
    return 0;
}