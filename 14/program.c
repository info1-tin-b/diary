#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) { // Arguments
    int a;
    bool mode = false;
    mode |= (argc > 1 && atoi(argv[1]) == 1) ;

    while(!feof(stdin)) { 
        if (scanf("%d", &a) != 1) {
            fprintf(stderr, "Erreur, valeur invalide\n");
            continue;
        }
        if (mode) 
            printf("(%d)", a);
        else 
            printf("[%d]", a);
    }
    return 0; // Le status de sortie
}