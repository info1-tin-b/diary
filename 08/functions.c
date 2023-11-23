#include <stdio.h>

void prout() {
    printf("prout\n");
}

int add(int a, int b) {
    prout();
    return a + b;
}

int main() {
    int u = 23;
    int v = 42;
    printf("%d\n", add(u, v));
}


