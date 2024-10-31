#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Le nombre d'arguments est %d\n", argc);
    if (argc > 1) {
        printf("Le deuxième argument est %s\n", argv[1]);
    }
}