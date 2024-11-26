#include <stdio.h>


int main() {
    printf("before\n");
    int i = 1;
    while (i < 10) {
        if (i++ % 5) break;
        printf("loop\n");
    }
    printf("after\n");
}

i   i < 10    i%5   i%5 != 0  i++  printf 
1   oui       1      oui      2    loop
2   oui       2      oui      3    loop
3
4
5   oui       0      non   --------------
