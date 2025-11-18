#include <stdio.h>

int main() {
    int a[] = "ABCDE";

    // const int size = sizeof(a)/sizeof(a[0]);
    // for (int i = 0; i < size; i++) {
    //     printf("%c, ", a[i]);
    // }

    int i = -1;
    while(a[++i]) putchar(a[i]);

    char *p = &a;
    while(*p) putchar(*p++);
}