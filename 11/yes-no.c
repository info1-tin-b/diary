#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    bool again = false;
    do {
        printf("Aimes-tu le foot [Yn]: ");
        char c = getchar();
        c = tolower(c);
        again = false;
        switch(c) {
            case '\n':
            case 'y':
                printf("Pffff...\n");
                break;
            case 'n': 
                printf("Bravo tu es un intellectuel\n");
                break;
            default:
                printf("Mauvaise réponse\n");
                again = true;
        }
        if (c != '\n')
            while((c = getchar()) != '\n' && c != EOF) {}
    } while(again);
}