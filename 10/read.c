#include <stdio.h>
#include <math.h>

int readCoordinate(double *x, double *y) {
    printf("Valeur de X: \n"); 
    if(scanf("%lf", x) != 1) return 0;
    printf("Valeur de Y: \n"); 
    if(scanf("%lf", y) != 1) return 0;
    return 1;
}

int main() {
    printf("L'hypothénuse d'un trangle:\n"
           "---------------------------\n");
    double x, y;
    while(readCoordinate(&x, &y)) 
        printf("Hypothénuse: %lf\n", sqrt(x * x + y * y));
}