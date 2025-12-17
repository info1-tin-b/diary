#include <stdio.h>
#include <stdbool.h>

bool quad_solve(double a, double b, double c, 
                double *x1, double *x2) {
    double delta = b * b - 4 * a * c;
    if (delta < 0) return false;
    double s = sqrt(delta);
    *x1 = (-b + s) / (2 * a);
    *x2 = (-b - s) / (2 * a);
    return true;
}

void compute_quad() {
    double u, v;
    if (!quad_solve(2,3,-4, &u, &v)) {
        printf("Error\n");
    }
}

void foo(int *a) {
    printf("%p\n", a);
    printf("0x%llx\n", a);
    printf("%d\n", *a);

    *a = 23;
}

int main() {
    int value = 42;

    //int *u = &value; 

    foo(&value);   
    printf("%d\n", value); // 23 
}

/*
-   (-23)
-   (23 - 34)

*   (u * v)  Multiplication
*   (int *u) Déclaration d'un pointeur
*   (*u) Déréférencement (accès à la valeur)

&   (u & v)  Opérateur ET binaire
&   (&u)     L'adresse de u

*/

