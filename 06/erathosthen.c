#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int main(int argc, char*argv[]) {
    // Lecture des arguments
    if (argc < 2) return 1;
    int max_value = atoi(argv[1]);

    for (int value = 2; value < max_value; value++) {
        bool is_prime = true;
        for (int i = 2; i*i < value; i++) {
            if (value % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) printf("%d ", value);
    }

}
