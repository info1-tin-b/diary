#include <stdio.h>


int main() {
    int b = 23;
    int data[] = {1,2,3,4};
    int a = 42;

    data[-1] = 55;  // *(data + -1)
    data[-2] = 88;

    printf("%d\n%d\n", a, b);
}