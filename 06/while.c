#include <stdio.h>

int main() {
    char *s = "Anticonstitutionnellement";

    while (*s != '\0') {
        printf("%c", *(s++) + 1);
    }
}