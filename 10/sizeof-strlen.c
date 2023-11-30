#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Salut";
    char u;
    short v;
    int w;
    long long x;
    printf("Taille d'un char: %ld\n", sizeof(u)); // Donne la taille en char de l'élément pointé
    printf("Taille d'un short: %ld\n", sizeof(v)); // Donne la taille en char de l'élément pointé
    printf("Taille d'un int: %ld\n", sizeof(w)); // Donne la taille en char de l'élément pointé
    printf("Taille d'un long long: %ld\n", sizeof(x)); // Donne la taille en char de l'élément pointé

    printf("Taille de la chaîne en mémoire: %ld\n", sizeof(s)); // Donne la taille en char de l'élément pointé
    printf("Taille utile de la chaîne: %ld\n", strlen(s)); 

}