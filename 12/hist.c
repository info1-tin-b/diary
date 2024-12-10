#include <stdio.h>
#include <limits.h>

int max(int data[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        max = data[i] > max ? data[i] : max;
    }
    return max;
}

void normalize(int data[], int size, int scale) {
    int max_value = max(data, size);
    for (int i = 0; i < size; i++) {
        data[i] = data[i] * scale / max_value ;
    }
}

int main() {
    int hist[] = {1000,2000,4000,6000,7000,5000,4000,3000,2000,0,10};

    normalize(hist, sizeof(hist)/sizeof(hist[0]), 20);

    for (int i = 0; i < sizeof(hist) / sizeof(hist[0]); ++i) {
        printf("%2d ", i);
        for (int k = 0; k < hist[i]; ++k) {
            printf("*");
        }
        puts("");
    }
}