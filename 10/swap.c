#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;

    printf(
        "&a: %p\n"
        "&b: %p\n"
        "&tmp: %p\n"
        "a: %p\n"
        "b: %p\n"
        "*a: %d\n*b: %d\n", &a, &b, &tmp, a, b, *a, *b
    );
}

int main() {
    int data[] = {1,2,3,4,5,6,7,8};
    swap(&data[0], &data[7]);
}