#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int m[10][10] = {};
    int max_value = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++) {
            m[i][j] = rand() % 6000; //i * j;
            max_value = m[i][j] > max_value ? m[i][j] : max_value;
        }

    int digits = (!max_value ? 1 : log10(max_value) + 1) ;
    printf("digits %d\n", digits);
    for (int i = 0; i < 10; i++) {
        printf("| ");
        for (int j = 0; j < 10; j++) 
            printf("%*d | ", digits, m[i][j]);
        printf("\n");
        for (int j = 0; j < 10; j++) {
            printf("|");
            printf("%.*s", digits +2, "---------------------------------");
        }
        printf("|\n");
    }
}