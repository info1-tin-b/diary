#include <stdio.h>

int main() {
    int a = 1000, b = 1000;
    int result = scanf("%d%d", &a, &b); // Je passe l'adresse de a
    printf("Resultat de scanf: %d\n", result);
    printf("La valeur est %d %d\n", a, b);
}