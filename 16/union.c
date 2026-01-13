#include <stdint.h>
#include <stdbool.h>

typedef union {
    struct {
        bool b0: 1;
        bool power: 1;
        bool reset: 1;
        bool b3: 1;
        bool start: 1;
        bool b5: 1;
        bool pump: 1;
        bool smoke: 1;
    } bits;
    int8_t value;
} Register;


typedef union {
    int i;
    float f;
    char c[4];
} Data1; 

typedef struct {
    int i;
    float f;
    char c[4];
} Data2; 

int main() {
    Data1 d1;
    Data2 d2;

    Register p0;
    p0.value = 0x0;
    p0.bits.pump = true;

    d1.i = 12345678;
    printf("Data1 as int: %x\n", d1.i);
    printf("Data1 as c: %hhx, %hhx, %hhx, %hhx\n", 
        d1.c[0], d1.c[1], d1.c[2], d1.c[3]);

    printf("Size of union Data1: %zu bytes\n", sizeof(d1));
    printf("Size of struct Data2: %zu bytes\n", sizeof(d2));
}