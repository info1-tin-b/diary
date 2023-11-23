#include <stdio.h>

// Postincrémentation ()++
// Préincrémentation ++()
// Postdécrémentation ()--
// Prédécrémentation --()

int main() {
    int i = 0;
    i = i + i++;
    printf("%d\n", i);
    printf("%d\n", i);
}