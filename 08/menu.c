#include <stdio.h>


int main() {
    int c;

        printf(
            "Menu:\n"
            "-----\n"
            "1. Chocolat\n"
            "2. Café\n"
            "3. Jus de pomme\n"
            "4. RedBull\n"
            "5. Quitter\n");
    while(!feof(stdin)) {
        printf("---\n");
        while((c = getchar()) == '\n' && c != EOF) { } // Vider le buffer d'entrée
        switch(c) {
            case '1': printf("Tiens, voilà un chocolat pour toi\n"); break;
            case '2': printf("Tiens, voilà un bon café pour toi\n"); break;
            case '3': {
                printf("Quoi ? Tu veux vraiment un jus de pomme ? 1: oui, 2: non\n"); 
                int d;
                while((d = getchar()) == '\n' && d != EOF) { } // Vider le buffer d'entrée
                switch(d) {
                    case '1': printf("Tiens, voilà un jus de pomme\n"); break;
                    case '2': printf("Ahhh, je le savais bien\n"); break;
                }
                break;
            }
            case '4': printf("TEEEE DOOONNNNNNNNE DES AILLLLLES\n"); break;
            case '5': return 0;
            default: printf("Euh?"); break;
        }
    }
}