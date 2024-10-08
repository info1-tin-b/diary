#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char*argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Error: Pas assez d'arguments!\n");
        return 1;
    }

    // int a = atoi(argv[1]);
    // int b = atoi(argv[2]);
    int a, b;
    if (sscanf(argv[1], "%d", &a) != 1) {
        fprintf(stderr, "Erreur de lecture dans A\n");
        return 2;
    }
    if (sscanf(argv[2], "%d", &b) != 1) {
        fprintf(stderr, "Erreur de lecture dans B\n");
        return 3;
    }

    int c = a + b;
    printf("%d\n", c);
}