#include <stdio.h>
#include <stdlib.h>

void print_spaces(int n) {
    for (int i = 0; i < n; i++) 
        putchar(' ');
}

long long fib_debug(long long n, int level) {
    print_spaces(level * 2);
    printf("fib(%lld)\n", n);
    if (n == 1 || n == 2) {
        //printf("%d", 1);
        return 1;
    }
    long long result = fib_debug(n - 1, level + 1) + fib_debug(n - 2, level + 1);
    //printf("%lld", result);
    return result;
}

long long fib(long long n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

long long fibonacci(long long n) {
    long long a = 1, b = 1;
    //printf("%d %d ", a, b);
    long long i = 2;
    while(i < n) {
        long long tmp = b;
        b = a + b;
        a = tmp;
        //printf("%d ", b);
        i++;
    }
    return b;
}

long long main(int agc, char*argv[]) {
    int n = atoi(argv[1]);
    #ifndef RECURSIVE
    printf("%lld\n", fibonacci(n));
    #else
    printf("%lld\n", fib_debug(n, 0));
    #endif
}
