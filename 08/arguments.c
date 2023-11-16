#include <stdio.h>
#include <stdlib.h>
// ./a.out -a23 -b42 -c66
// 0       1    2    3

// ./a.out -c23 -a42 -b66
// 0       1    2    3

int main(int argc, char *argv[]) {
    int a = 1; 
    int b = 2;
    int c = 3;

    for (int i = 1; i < argc; i++) {
        sscanf(argv[i], "-a%d", &a);
        sscanf(argv[i], "-b%d", &b);
        sscanf(argv[i], "-c%d", &c);
    }
    printf("a=%d, b=%d, c=%d\n", a, b, c);
}