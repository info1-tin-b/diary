#include <stdio.h>


char *s = "heig-vd";

void print_with_size(char *s, int size) {
    for (int i = 0; i < size; i++) {
        printf("%c", s[i]);
    }
    puts("");
}

void print(char *s) {
    while(*s) {
        printf("%c", *s);
        s++;
    }
    puts("");
}

int main() {
    print(s);
    print_with_size(s, 4);
}