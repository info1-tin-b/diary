#include <stdio.h>
#include <stdbool.h>

bool is_reversed(const int a[], const int b[], size_t size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[size - 1 - i]) return false;
    }
    return true;
}