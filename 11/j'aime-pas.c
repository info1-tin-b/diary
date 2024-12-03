#include <stdio.h>

int baz(int a) {
    return 42;
}

int bar(int a) {
    return 23;
}

int main() {
    printf("%d, %d\n", bar(1), baz(0));
}
