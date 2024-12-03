#include <stdio.h>


int main() {
    int a = 42;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("%d\n", *&*&*&***d);
}