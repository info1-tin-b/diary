#include <stdio.h>

int main() {
    double a = 1000000.;
    double b = 0.1;
    double c = a + b;
    printf("%f\n", c);

    if (c == 1000000.1) {
        printf("C'est égal\n");
    } else {
        printf("C'est différent\n");
    }
}