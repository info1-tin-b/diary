/**
 * ./viginere "sacqueboute" "vent"
 */
#include <stdio.h> 
#include <string.h> 
#include <ctype.h>

void viginere(const char s[], const char key[]) {
    const int size = strlen(s);
    const int size_key = strlen(key);
    for (int i = 0; i < size; i++) {
        char c = tolower(s[i]);
        if (isalpha(c)) 
            c = 'a' + ((c - 'a') + (key[i % size_key] - 'a')) % 26;
        printf("%c", c);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    viginere(argv[1], argv[2]);
}