#include <stdio.h>

int main() {
    int hist[] = {1,2,4,6,7,5,4,3,2,0,1};

    for (int i = 0; i < sizeof(hist) / sizeof(hist[0]); ++i) {
        printf("%2d ", i);
        for (int k = 0; k < hist[i]; ++k) {
            printf("*");
        }
        puts("");
    }
}