#include <stdio.h>

int main() {
    int counter = 0;
    for (int i = 10 ; i > 0 ; i--) 
        printf("%d ", counter++);
    printf("FIN\n");
}