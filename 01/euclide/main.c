// Compute the PGCD of two numbers 
// it uses the Euclide' Algorithm
#include <stdio.h>

int main() {
    int a, b;
    printf("Donne moi une première valeur:");
    scanf("%d", &a);
    printf("Donne moi une deuxième valeur:");
    scanf("%d", &b);

    while(b != 0) { 
        int r = a % b;
        a = b;
        b = r;
    }
    printf("Le PGCD est %d\n", a);
}