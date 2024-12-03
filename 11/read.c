#include <stdio.h>


int main() {
    printf("Fais ton choix entre 1 et 4\n");
    char c = getchar();
    printf("Bravo, voici ton caractère : %hhd (%c)\n", c, c);
    
    {
        char c; 
        while ((c = getchar()) != '\n' || c != EOF) {
            printf("Je consomme %hhd (%c) (miam)\n", c, c);
        }
    }


}