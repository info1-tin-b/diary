// Converti un nombre décimal en binaire
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char * argv[]) {
    int n = 134;
    for (int i = 31; i >= 0; i--) {
        printf("%u", (n & (1 << i)) != 0);
    }
    printf("\n");
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
134 & 0x01
*/
