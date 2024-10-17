#include <stdio.h>
#include <math.h>
int main() {
    int age_john = 270;
    int age_lisa = 3;
    int age_sam = 1200000;

    int max_age = age_john;
    if (age_lisa > max_age) {
        max_age = age_lisa;
    }
    if (age_sam > max_age) {
        max_age = age_sam;
    }
    int digits = floor(log10(max_age)) + 1;
    printf("+-----------------+");
    for (int i = 0; i < digits+2; i++) {
        printf("-");
    }
    printf("+-----------------+\n");
    printf("|       Name      |");
    for (int i = 0; i < digits - 3 + 1; i++) {
        printf(" ");
    }
    printf("Age ");
    printf("|       City      |\n");
    printf("|    John Smith   | %*d |     New York    |\n", digits, age_john);
    printf("|    Lisa Brown   | %*d |     Chicago     |\n", digits, age_lisa);
    printf("|    Sam Wilson   | %*d |     Boston      |\n", digits, age_sam);
    printf("+-----------------+");
    for (int i = 0; i < digits+2; i++) {
        printf("-");
    }
    printf("+-----------------+\n");
}