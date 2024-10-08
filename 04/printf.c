#include <stdio.h>


int main() {
    printf("Test\n");
    printf("Valeur de l'entier %d\n", 42);
    printf("Valeur du double %f\n", 3.1415926535926535);
    printf("Valeur du double %.23f\n", 3.1415926535926535);
    printf("Valeur du double %.1f\n", 3.1415926535926535);
    printf("Valeur du double %8.1f\n", 3.1415926535926535);
    printf("Valeur du double %08.1f\n", 3.1415926535926535);
    printf("Valeur du double %g\n", 3.1);
    printf("Valeur du double %f\n", 3.1);
    printf("%%\n");
    double a = 42;
    printf("Valeur du double %g\n", a);
}