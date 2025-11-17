#include <stdio.h>


int main() {
    int a = 0;
    while (!feof(stdin)) {
        printf("Entrez un nombre: ");
        if (scanf("%d", &a) != 1) {
            char c;
            while(c = getchar() && (c != '\n' || c != EOF));
            continue;
        }
        printf("Première valeur: %d\n", a);

    }
}