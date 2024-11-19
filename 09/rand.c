#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    srand(0);
    for (int i = 0; i < 10; i++) {
        printf("%d ", rand() % 10);
    }
}