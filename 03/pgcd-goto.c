
#include <stdio.h>
#include <stdlib.h> 

int main() {
    debut:
    int a = 6;
    int b = 3;
    boucle: 
    if (b == 0) {
        printf("printf(%d)\n", a);
        exit(0);
    } else { 
        int r = a % b;
        a = b;
        b = r;
    }
    goto boucle;
}