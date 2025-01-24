#include <stdio.h>
#include <string.h>
#include <math.h>

void spirale(char *m, size_t size) {
    memset(m, '.', size);
    m[size/2] = '$';

    int width = sqrt(size);

    for(int i = 0; i < 1000; i++) {
        float x = sin(2*3.1415 / 1000 * i);
        float y = cos(2*3.1415 / 1000 * i);
        int row = x * width / 2 / 2+ width / 2;
        int col = y * width / 2 / 2+ width / 2;
        m[row * width + col] = '#';
    }
}

int main() {
    char m[17][17];

    spirale(&m[0][0], 17*17);

    // Display
    for (int row = 0; row < 17; row++) {
        for (int col = 0; col < 17; col++) {
            printf("%c%c", m[row][col], m[row][col]);
        }
        puts("");
    }

}