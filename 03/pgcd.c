
#include <stdio.h>
#include <stdlib.h> 

int main() {

    int a = 6;
    int b = 3;

    int a0 = a;
    int b0 = b;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    printf("Le pgcd de %d et %d est %d\n", a0, b0, a);
}