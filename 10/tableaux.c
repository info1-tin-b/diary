#include <stdio.h>

int string_length(char *str) {
    int length = 0;
    while(*str != '\0') {
        str++; length++;
    }
    return length;
}

int main() {
    int t[10] = {2,4,6,8,10,12}; // Les valeurs non initialisées vaudront 0
    int q[100] = {1}; // J'initialise la première valeur à 1, les autres vaudront 0
    int p[100] = {0}; // /!\ Dangereux, j'initialise la premiève valeur à 0 et les autres vaudront zéro 
    int z[100] = {}; // J'initialise rien, et le reste est initialisé à 0

    //         0 1 2 3 4 Indices
    int b[] = {1,2,3,4,5}; // Si la taille du tableau n'est pas spécifiée, 
                           // le compilateur va regarder le nombre de valeurs initialisées

    for (int i = 0; i < 10; i++) printf("%d ", t[i]);
    printf("\n");   
    printf("%d\n", b[1]); // Affiche la seconde valeur de b (soit 2)

    char c[] = {'s', 'a', 'l', 'u', 't'};
    for(int i = 0; i < 5; i++) printf("%c", c[i]); // salut

    char d[] = "salut"; // Presque équivalent sauf que le tableau vaut 6 éléments (sentinelle de fin)
    for(int i = 0; i < 5; i++) printf("%c", c[i]); // salut
}