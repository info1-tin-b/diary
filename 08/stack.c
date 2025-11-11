#include <stdio.h>

int compute(int a , int b) {
    int c = 10;
    return c * (a + b);
}
int main(int argc, char*argv[]) {
    int a = 3;
    int b = 5;
    int c = compute(a, b);
    printf("%d\n", compute(1,2));
}