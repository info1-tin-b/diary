#include <stdio.h>

void hello() {
    printf("Hello\n");
}

void greeting(char *str) {
    printf("Hello %s\n", str);
}

int doubleIt(int a) {
    a *= 2;
    return a;
}

/*
a*b Multiplier
*a  Déréférencer 
int *a; Déclaration d'un pointeur
&a  L'adresse de 
*/

void doubleIt2(int *a) {
    *a *= 2;
}

int main() {
    hello();
    greeting("Bob");

    doubleIt(10);

    int u = 42;
    doubleIt2(&u);
}