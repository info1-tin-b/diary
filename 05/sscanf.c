#include <stdio.h>

int main() {
    char str[] = "123 3.1415 6.7.8";

    int a; 
    float b;
    float c;
    int d;
    int result = sscanf(str, "%d %d %f %f", &a, &d, &b, &c);

    printf("%s\n", str);
    printf("%d\n", a);
    printf("%d\n", d);
    printf("%f\n", b);
    printf("%f\n", c);
    printf("Result: %d\n", result);
}