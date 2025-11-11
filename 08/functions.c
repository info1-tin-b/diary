#include <stdio.h>

int bonjour() {
    printf("bonjour\n");
}

int hello() {
    int u = 42;
    printf("hello world\n");
}

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("%d\n", add(23, 42));

    bonjour();
    return 0;
}