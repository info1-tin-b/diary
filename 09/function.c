#include <stdbool.h>


/**
 * Solve a quadratic equation of the form a*x^2 + b*x + c = 0
 * 
 * @param a the coefficient of x^2
 * @param b the coefficient of x
 * @param c the constant term
 * @param x1 the first root
 * @param x2 the second root
 * 
 * @return true if the equation has real roots, false otherwise
 */
bool solve_quadratic_equation(double a, double b, double c, 
                              double *x1, double *x2) {
    double d = b * b - 4 * a * c;
    if (d < 0) {
        return false;
    }
    if (d == 0) {
        *x1 = -b / (2 * a);
        *x2 = *x1;
        return true;
    }
    *x1 = (-b + sqrt(d)) / (2 * a);
    *x2 = (-b - sqrt(d)) / (2 * a);
    return true;
}