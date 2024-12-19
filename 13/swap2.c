#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void badswap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int u = 23;
    int v = 42;
    printf("u = %d, v = %d\n", u, v);
    puts("-----------");
    //swap(&u, &v);
    badswap(u, v);
    printf("u = %d, v = %d\n", u, v);    
}
