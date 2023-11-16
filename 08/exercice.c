/**
 * Soit une chaîne de caractère donnée sur l'argument 1
 * Chercher si cette chaîne contient le caractère 'z'
 * Et compter le nombre d'occurences de 'z'
 * ./a abcdefzza
 * 2
 */
#include <stdio.h>
int main(int argc, char*argv[]) {
    if (argc < 3) return 1;

    int i = 0;
    char letter = argv[2][0];
    int occurences = 0;
    while (argv[1][i] != '\0') {
        occurences += argv[1][i++] == letter;
    }
    printf("Le nombre de %c est: %d\n", letter, occurences);
}