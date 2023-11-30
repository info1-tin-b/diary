#include <stdio.h>

int main() {
    int toto = 42;
    int *p = &toto;
    printf("%p\n", p); // L'adresse à la quelle pointe p
    printf("%p\n", &toto); 
    printf("%d\n", toto);
    printf("%d\n", *p);

    // Aïe !
    int **q = &p;
    printf("%d\n", **q);
    printf("%d\n", **&*&*q);

    printf("Toto est un (int) valant %d, localisé à l'adresse %p\n", toto, &toto);
    printf("p est un (int*) valant %p, localisé à l'adresse %p\n", p, &p);
    printf("q est un (int**) valant %p, localisé à l'adresse %p\n", q, &q);

    // Aïe (puissance 2)
    int t[] = {1,2,3}; // t c'est bien un pointeur sur la première valeur 1
    printf("%d\n", *t);
    printf("%d\n", *(t+1)); // t[1] === *(t+1)

    // a[b] === *(a + b) === *(b + a) === b[a]
    printf("%d\n", 1[t]);
}