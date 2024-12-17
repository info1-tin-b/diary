#include <stdio.h>


int foo() {
    return 42;
}

int baz(int a) {
    return foo();
}

int bar(int a) {
    return 23;
}

int main() {
    printf("%d, %d\n", bar(1), baz(0));
}
