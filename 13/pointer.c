#include <stdio.h>

char s[] = "petit bonhomme\0en\0mousse";

int main() {
    printf("%s\n", s); // Petit
    printf("%s\n", s + 6); // bonhomme
    printf("%s\n", s + 15); // en
    printf("%s\n", s + 18); // mousse

    char *argv[] = { s, s + 6, s + 15, s + 18};

    for(int i = 0; i < 4; i++) {
        printf("%s\n", argv[i]);
    }
    // Affiche : 
    // petit 
    // bonhomme 
    // en 
    // mousse
}