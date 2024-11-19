#include <stdio.h>

int main() {
    char c[] = {'b', 'o', 'n','j', 0, 'o', 'u', 'r', 97, 98, 0};
    
    int d[] = {1784835950, 0x006f7572};

    for (int i = 0; i < 7; i++) {
        printf("%c ", *((char*)&d + i));
    }

}