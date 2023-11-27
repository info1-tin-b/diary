
#include <stdio.h>

// &var        L'adresse de var
// char *var   Déclare une variable `var` qui est un pointeur sur un `char`
// *var + 1    Déréférencez le pointeur pour accéder à la valeur

double function(int *a, int *b) {
    *a += 2;
    (*b)++;
    return *a + *b;
}

int main() {
    int u = 1;
    int v = 2;
    int w = function(&u, &v);
    printf("%d, %d, %d\n", u, v, w);

    sscanf("42", "%d", &w);
}
