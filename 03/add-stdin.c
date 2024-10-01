#include <stdio.h>
#include <stdlib.h>

int main() {
    int a; 
    int b;
    printf("Veuillez entrer deux nombres: ");
    scanf("%d %d", &a, &b);
    int c = a + b;
    printf("%d\n", c);
}