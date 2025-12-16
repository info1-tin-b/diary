#include <stdio.h>


int main() {
    unsigned int x = 4;
    for (int i = 0; i < 20; i++) {
        x = (1103515245*x + 12345) % (1<<31);
        printf("%u\n", x % 10);
    }
}