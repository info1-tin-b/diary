#include <stdio.h>
#include <limits.h>  // pour INT_MIN
#include <string.h>  // pour strlen


void print(char *str, int v) {
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c == '%') {
            if (str[i+1] == 'd') {

            }
        }
        putchar(c);
    }
}

int main() {

    // printf("'%5.2f'", 3.1415926535); // ' 3.14'
    // printf("'%-5.2f'", 3.1415926535); // '3.14 '
    // printf("'%-*.2f'", 7, 3.1415926535); // '   3.14'
    // printf("'%6.*f'", 3, 3.1415926535); // ' 3.142'
    // printf("'%*.*f'", 6, 3, 3.1415926535); // ' 3.142'

    for (int i = 1; i < 10; i++) {
        printf("'i=%02d %*.2f'\n", i, i, 3.1415926535); //
    }
}