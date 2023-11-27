#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    printf("Valeur: %d\n", fib(5));
}

/*
5
    4
        3
            2
                <2
            1
                <1
            <3
        2
            <2
        <5
    3
        2
            <2
        1
            <1
        <3
    <8
*/