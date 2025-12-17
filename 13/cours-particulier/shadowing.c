#include <stdio.h>

int i = 42;

void foo() {
    printf("7. %d\n", i); // 42
}


int main() {
    printf("1. %d\n", i);

    int i = 23;
    printf("2. %d\n", i);
    for (int i = 0; i < 5; i++) {
        printf("3. %d\n", i);
    }
    printf("4. %d\n", i);

    {
        int i = 56;
        printf("5. %d\n", i); // 56
    }
    printf("6. %d\n", i); // 23
    foo();
}

