#include <stdio.h>
#include <limits.h>
int data[100000];
int hist[100];

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
    int size_data = 0;
    while(!feof(stdin)) {
        float age;
        if (scanf("%f", &age) != 1) { break; }
        data[size_data++] = age;
    }

    // Build histogram
    for (int i = 0; i < size_data; ++i) {
        hist[data[i]]++;
    }
    normalize(hist, sizeof(hist)/sizeof(hist[0]), 40);
    for (int i = 0; i < sizeof(hist)/ sizeof(hist[0]); ++i) {
        printf("%2d ", i);
        for (int k = 0; k < hist[i]; ++k) {
            printf("*");
        }
        puts("");
    }
}