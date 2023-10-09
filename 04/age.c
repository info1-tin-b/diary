#include <stdio.h>

int main() {
    int today = 2023;
    int age;
    int result;
    do {
        printf("Quel est ton âge [1-130] ? ");
        result = scanf("%d", &age);
        while (getchar() != '\n');//Clearing the buffer.
    } while(result == 0 || age <= 0 || age > 130);
    printf("Ah ah ! Tu es né en %d\n", today - age);
}