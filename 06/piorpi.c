#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

int main() {
    float radius;
    if (scanf("%f", &radius) != 1) {
        printf("Invalid input\n");
        return 1;
    } 
    const double pi = 3.14159265358979323846;

    printf("Area: %f\n", PI * radius * radius);
    printf("Circumference: %f\n", 2 * pi * radius);
}