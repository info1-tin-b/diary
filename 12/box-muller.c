#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double gauss(double mean, double stddev) {
    double u1 = (rand() + 1.0) / (RAND_MAX + 1.0);
    double u2 = (rand() + 1.0) / (RAND_MAX + 1.0);
    double z0 = sqrt(-2.0 * log(u1)) * cos(2.0 * M_PI * u2);
    return mean + stddev * z0;
}

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", gauss(42, 10.0));
    }
}