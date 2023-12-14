#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[10][10] = {};
    int max_value = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++) {
            m[i][j] = rand() % 6000; //i * j;
            max_value = m[i][j] > max_value ? m[i][j] : max_value;
        }
        
    int digits = !max_value ? 1 : log10(max_value) - 1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) 
            printf("%*d |", digits, m[i][j]);
        puts("\n");
        for (int j = 0; j < 10; j++) {
            printf("|");
            printf("%.*s", digits + 1, "---------------------------------");
        }
        puts("\n ");
    }
}