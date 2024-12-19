#include <stdbool.h>
#include <math.h>
#include <stdio.h>

/**
 * Calculate the roots of a quadratic equation
 * ax^2 + bx + c = 0
 * @param a the coefficient of x^2
 * @param b the coefficient of x
 * @param c the constant
 * @param x1 the first root
 * @param x2 the second root
 * @return true if roots are real, false otherwise
 */ 
bool quadratic(double a, double b, double c, double *x1, double *x2) {
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        return false;
    }
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return true;
}

int main() {
    double x1, x2;
    if (quadratic(1, -3, 2, &x1, &x2)) {
        printf("x1 = %f, x2 = %f\n", x1, x2);
    } else {
        printf("No real roots\n");
    }
}
