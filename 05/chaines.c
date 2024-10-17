#include <stdio.h>

int main() {
    char *s = "abc\0def";
    char c = s[3];

    for(int i = 0; s[i] != '\0'; i++) {
        putchar(s[i]);
    }
    putchar('\n');

    printf("%s\n", s);

    for(int i = 0; i < 10; i++) {
        printf("%d: %hhd (%c)\n", i, s[i], s[i]);
    }
}