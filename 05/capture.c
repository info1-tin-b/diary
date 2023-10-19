#include <stdio.h>

int main(int argc, char * argv[]) {
    int v;
    const int min = 10;
    const int max = 20;
    printf("Bienvenue dans mon jeu, donne moi une valeur entre %d et %d\n", min, max);
    if (argc < 2 || sscanf(argv[1], "%d", &v) != 1 || v < min || v > max) {
        printf("Oops\n");
        return 2;
    }
    printf("Bravo tu as gagné\n");
    return 0;
}