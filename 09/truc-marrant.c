#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int size = 0;
    while(str[size] != 'p') { size++; }

    for(int i = size-1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n%d\n", size);
}

int main() {
    char *s = "les biscuits"; // Constante littérale : uniquement en lecture
    printf("Taille de la chaîne: %ld\n", strlen(s));
    reverse(s);


    char t[10] = "abcdef";
    t[2] = 'k';
    printf("%d %s\n", strlen(t), t);
}