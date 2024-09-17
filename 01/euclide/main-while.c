#include <stdio.h>

int main() {
    int a = 42, b = 30;

    while(b != 0) { 
        int r = a % b;
        a = b;
        b = r;
    }
    printf("Le PGCD est %d\n", a);
}