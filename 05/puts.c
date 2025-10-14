#include <stdio.h>


void my_own_puts(char *str) {
    while(str != NULL) {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main() {
    puts("salut %d %lf\n");
}