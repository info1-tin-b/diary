#include <stdio.h>
#include <stdlib.h>

const double pi = 3.1415926535;

int main(int argc, char * argv[]) {

    // 1. Lecture des arguments
    if (argc < 3) { 
        printf("Erreur: nombre d'arguments invalide!\n");
        return 1; 
    }
    double radius = atof(argv[1]);
    double height = atof(argv[2]);

    // 2. Validité des arguments
    if (radius <= 0 || height <= 0) { 
        printf("Erreur: valeurs des arguments invalide!\n");
        return 2; 
    }

    // 3. Traitement de l'information
    double volume = 1. / 3. * pi * radius * radius * height;

    // 4. Affichage
    printf("Le volume du cône est : %lf\n", volume);

    return 0;
}