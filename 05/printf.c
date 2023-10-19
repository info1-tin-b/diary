#include <stdio.h>

int main() {
    printf("'%-+10.3f'\n", 3.1415926535);
    printf("'%+10.3f'\n", -3.1415926535);
    printf("'%010.3f'\n", -3.1415926535);
    //printf("'%-010.3f'\n", -3.1415926535); // Pas accepté
    printf("'%.2s'\n", "abcdefghijklmnopqrstuvwxyz");
    printf("'%.5s'\n", "---------------------------------");
    printf("'%.*s'\n", 5, "---------------------------------");

    for ( int i = 0; i < 10; i++) {
        printf("'%.*s'\n", i, "---------------------------------");
    }

    for ( int i = 0; i < 10; i++) {
        printf("'%*.*lf'\n", 10 * (i % 2) + 10, i, 3.14159265358979323842263270988);
    }    
    
    printf("%x\n", 754346364); // Hexadécimal
}