/**
 * Ce programme démontre la lecture générique d'arguments
 * Il peut être appelé avec --foo=NUMBER, --bar=NUMBER
 * Les options sont optionnelles et peuvent être données
 * dans n'importe quel ordre.
 * 
 * References: 
 * - http://...
 * - ChatGPT
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char*argv[]) {
    int foo = 23;
    int bar = 42;

    for (int i = 1; i < argc; ++i) {
        char *arg = argv[i];
        if (strncmp(arg, "--foo=", 6) == 0) {
            if (sscanf(&arg[6], "%d", &foo) != 1) {
                fprintf(stderr, "Erreur: pas un nombre\n");
                return 2;
            }
            continue;
        }
        if (strncmp(arg, "--bar=", 6) == 0) {
            if (sscanf(&arg[6], "%d", &bar) != 1) {
                fprintf(stderr, "Erreur: pas un nombre\n");
                return 2;
            }
            continue;
        }        

        fprintf(stderr, "Warning: argument inconnu '%s' !\n", arg);
    }

    printf("Vos nombre sont: \n"
        "Foo: %d\n"
        "Bar: %d\n"
        "\nBonne journée...\n", foo, bar);
}