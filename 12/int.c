#include <stdint.h>

int main() {
    uint8_t k = -127;
    printf("%hhb\n", k);
}
/*
01111111
10000000
10000001 <---
*/