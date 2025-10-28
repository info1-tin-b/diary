#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int main(int argc, char*argv[]) {
    // Lecture des arguments
    if (argc < 2) return 1;
    int value = atoi(argv[1]);

    bool is_prime = true;
    for (int i = 2; i < value; i++) {
        if (value % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (!is_prime) printf("pas ");
    printf("premier\n");
}


/*
 8 est premier ?
 est-ce que 8 est divisible par 2 .. 7 ? non
 alors le nombre est premier
*/

