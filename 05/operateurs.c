#include <stdio.h>
#include <stdint.h>
int main() {
    uint8_t a = 0b10100101;
    uint8_t b = 0b11110000;
    //            10100000;

    uint8_t c = a & b; // ET bit à bit
}