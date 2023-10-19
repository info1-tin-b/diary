#include <stdio.h> 

int main() {
    int i = 42; // 42 est une constante littérale
    int u = 0x2a;
    int o = 052;
    int c = '*'; 
    int b = 0b00101010; // Pas standard selon ISO8899:2011 (standard C)

    int w = '5';
    
    printf("%x, %x, %x, %x, %x\n", i, u, o, c, b);
}