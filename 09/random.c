/**
 * Générateur de nombre pseudo-aléatoire
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc < 2) return 1;
    int seed = atoi(argv[1]);

    // gcc congruential constants
    unsigned int a = 1103515245;
    unsigned int b = 12345;
    unsigned int m = 1 << 31;

    for (int i = 0; i < 10; i++) {
        seed = (a * seed + b) % m;
        printf("%d ", seed % 10);
    }
    printf("\n");
}
