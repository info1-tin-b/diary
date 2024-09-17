#include <stdio.h>

int main() {
    int a = 42, b = 30;
    ici:
    if (b == 0) {
        printf("4) Le PGCD est %d\n", a);
        return 0;
    } else {
        printf("b n'est pas égal à zéro\n");
        int r = a % b;
        printf("1) a: %d, b: %d, r: %d\n", a, b, r);        
        a = b;
        printf("2) a: %d, b: %d, r: %d\n", a, b, r);
        b = r;
        printf("3) a: %d, b: %d, r: %d\n", a, b, r);
    }
    goto ici;
}