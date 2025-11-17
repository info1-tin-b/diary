#include <stdio.h>


void do_something() {
    printf("I do something\n");
}

int main() {
    while (!feof(stdin)) {
        // Affichage des options
        printf(
            "1. Option 1\n"
            "2. Option 2\n"
            "0. Quit\n\n"
            "> ");

        // Lecture d'un caractère au clavier
        char c = getchar();

        // Consomme le restant des caractères tapés encore dans `stdin`
        {
            char d;
            while ((d = getchar()) != '\n' && d != EOF) {
            }
        }

        // Traitement du choix
        switch (c) {
            case '1':
                do_something();
                break;
            case '2':
                printf("Tata\n");
                break;
            case '0':
                return 0;
            default:
                printf("Erreur!\n");
        }
    }
}