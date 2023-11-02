#include <stdio.h>

int main() {
    int i = 100, j = 200;
    //scanf("%*d %d", &i);
    int k = scanf("%d %d", &i, &j);
    printf("La valeur de i et j sont %d et %d\n", i, j);
    printf("(au passage, la valeur de retour de scanf est : %d)\n", k);
/*
    scanf("%d", &v); // Lire sur l'entrée standard
    sscanf(argv[2], "%d", &v); // Lire dans une chaîne de caractère
*/    
}