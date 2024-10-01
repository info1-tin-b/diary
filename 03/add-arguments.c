#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Error: Pas assez d'arguments!\n");
    } else {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int c = a + b;
        printf("%d\n", c);
    }
}