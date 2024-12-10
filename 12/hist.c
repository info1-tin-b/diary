#include <stdio.h>

int main() {
    int hist[] = {10,20,40,60,70,50,40,30,20,0,10};

    for (int i = 0; i < sizeof(hist) / sizeof(hist[0]); ++i) {
        printf("%2d ", i);
        for (int k = 0; k < hist[i]; ++k) {
            printf("*");
        }
        puts("");
    }
}