// Converti un nombre décimal en binaire
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char * argv[]) {
    if (argc < 2) return 1;
    int i = 32768;
    int n = atoi(argv[1]);
    while (i != 1) {
        printf("%d", i<=n);
        if (i <= n) {
            n = n - i;
        } 
        i = i / 2;
    }
    printf("%d\n", n == 1);
} 
/*
n    i     i <= n   display  i=i/2   n
134  512   false    '0'      256     134
134  256   false    '0'      128     134
134  128   true     '1'      64      134-128
*/




/*
'0b10000110'

134
*/
