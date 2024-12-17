#include <stdio.h>

int tableau[(long long)1024/4*1024*1024*10];

int main() {
    
    for (int i = 0; i < sizeof(tableau)/sizeof(tableau[0]); ++i) {
        tableau[i] = i;
    }
    getchar();
}