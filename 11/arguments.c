#include <stdio.h>
#include <string.h> 


void read_arguments(int argc, char*argv[], int *iterations, double *error) {
    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];

        if (strncmp(arg, "-i", 2) == 0) {
            if (sscanf(&arg[2], "%d", iterations) != 1) {
                printf("Erreur pas un nombre, connard\n");
            };
        }

        if (strncmp(arg, "-e", 2) == 0) {
            if (sscanf(&arg[2], "%lf", error) != 1) {
                printf("Erreur pas un nombre, connard\n");
            };
        }        
    }    
}

int main(int argc, char *argv[]) {
    double e;
    int iterations = 42;
    read_arguments(argc, argv, &iterations, &e);

    printf("Valeur de i: %d\n", iterations);
    printf("Valeur de e: %f\n", e);
}