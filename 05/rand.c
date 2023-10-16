#include <stdio.h>
#include <stdint.h> 

int main(int argc, char *argv[]) {

    // Paramètres par défaut
    uint32_t seed = 0;
    uint32_t max = 100;
    int n = 10;

    // Lecture des arguments
    // ./a.out [seed [max [n]]]
    if (argc > 1) {
        if (sscanf(argv[1], "%d", &seed) != 1) {
            printf("Erreur\n");
        }
    }

    if (argc > 2) {
        if (sscanf(argv[2], "%d", &max) != 1) {
            printf("Erreur\n");
        }
    }

    if (argc > 3) {
        if (sscanf(argv[3], "%d", &n) != 1) {
            printf("Erreur\n");
        }
    }    

    // Constantes du générateur pseudo-aléatoire
    const uint32_t a = 1103515245;
    const uint32_t c = 12345;
    const uint32_t m = -1;

    // Algorithme
    for(int i = 0; i < n; i++) {
        seed = (a * seed + c) % m;
        printf("%u\n", seed % max);
    }
}