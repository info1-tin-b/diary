#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <float.h>

double gauss(double mean, double stddev) {
    double u1 = (rand() + 1.0) / (RAND_MAX + 1.0);
    double u2 = (rand() + 1.0) / (RAND_MAX + 1.0);
    double z0 = sqrt(-2.0 * log(u1)) * cos(2.0 * M_PI * u2);
    return mean + stddev * z0;
}

int max(int data[], int size) {
    int max = DBL_MIN;
    for (int i = 0; i < size; i++) {
        max = data[i] > max ? data[i] : max;
    }
    return max;
}

void normalize(int data[], int size, int scale) {
    int max_value = max(data, size);
    for (int i = 0; i < size; i++) {
        data[i] = data[i] * scale / max_value;
    }
}

void display(int hist[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%2d ", i);
        for (int k = 0; k < hist[i]; ++k) {
            printf("*");
        }
        puts("");
    }
}

#define BINS 20

int main() {
    int hist[BINS] = {0};  // Histogram bins
    int n = 10000;        // Number of random samples
    double mean = BINS / 2;   // Mean of the Gaussian distribution
    double stddev = 2.0; // Standard deviation of the Gaussian distribution

    // Generate data and fill the histogram
    for (int i = 0; i < n; i++) {
        double value = gauss(mean, stddev);
        if (value >= 0 && value < BINS) { // Clamp values to fit the histogram range
            printf("%d ", (int)value);
            hist[(int)value]++;
        }
    }

    // Normalize the histogram for display purposes
    int scale = 20; // Maximum height of the histogram
    normalize(hist, sizeof(hist) / sizeof(hist[0]), scale);

    // Display the histogram
    display(hist, sizeof(hist) / sizeof(hist[0]));

    return 0;
}
