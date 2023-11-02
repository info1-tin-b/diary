#include <stdio.h>
#include <stdbool.h>
#define MODE 0

int main() {
    int i = 0;
#if MODE == 0
    // S'utilise quand le nombre d'itération n'est pas connu à l'avance
    while(i++ < 10) { 
        printf("Prout\n");
    }
#elif MODE == 1
    // S'utilise quand le nombre d'itération est connu à l'avance
    for(int i = 0; i < 10; i++) {
        printf("Prout\n");
    }
#elif MODE == 2
    // Pareil que le `while` mais s'exécute au moins une fois
    do {
        printf("Prout\n");
        i++;
    } while(i < 10);
#elif MODE == 3
    // A utiliser si vous voulez rater votre année
    debut:
    printf("Prout\n");
    if (i++ < 10) goto debut;
#endif 
}
/*
1. J'affiche 10x prout
2. J'affiche 9x prout 
3. J'affiche 11x prout
4. J'affiche une infinité de prouts
5. Je n'affiche aucun prout :(
*/