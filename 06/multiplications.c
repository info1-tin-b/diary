// Tables de multiplication
#include <stdio.h>

int main() {
    const int pad = 4;
    const int livret_max = 10;

    for (int i = 0; i < pad; i++) printf(" ");
    printf(" ");
    for (int i = 0; i <= livret_max; i++) {
        printf("%*d", pad, i);
    }
    for (int livret = 0; livret <= livret_max; livret++) {
        printf("\n%*d ", pad, livret);
        for (int j = 0; j <= livret_max; j++) {
            printf("%*d", pad, j * livret);
        }
    }
    printf("\n");
}