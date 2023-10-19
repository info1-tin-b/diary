#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // sqrt      x*x + y*y = h * h

int main(int argc, char *argv[]) {
    double point_A = 100; // [pts]
    double point_B = 25;
    double point_C = 5;
    double point_D = 0;

    double diametre_zone_a = 2; // [cm]

    double x;
    if (argc < 2) {return 1;}
    if (sscanf(argv[1], "%lf", &x) == 0) {
        return 2;
    } 

    double y;
    if (argc < 3) {return 1;}
    if (sscanf(argv[2], "%lf", &y) == 0) {
        return 2;
    }     
    printf("Valeur x=%lf,\ty=%lf\n", x, y);

    double r = sqrt(x*x + y*y);
    printf("Le rayon est: %lf\n", r);

    // Un petit peu avant...


    // Plus loin dans le programme

    if (r < diametre_zone_a/2) {
        printf("%lf", point_A);
    }



}