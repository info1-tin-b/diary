#include <stdio.h>

int main() {
    float x = 1.0f; // Nombre normal
    float y = 1.0e-38f; // Nombre subnormal
    float z = 1.0e-37f; // Nombre presque subnormal

    for (int i = 0; i < 10; i++) {
        printf("x = %e, y = %e, z = %e\n", x, y * 1e38f, z * 1e37f);
        x = x / 2.0f;
        y = y / 2.0f;
        z = z / 2.0f;
    }
}