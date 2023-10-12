#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {
    if (argc < 3) { return 1; }
    //int a = atoi(argv[1]);
    //int b = atoi(argv[2]);
    int a;
    if(sscanf(argv[1], "%d", &a) == 0) { return 2; } else {}
    int b;
    if(sscanf(argv[2], "%d", &b) == 0) { return 3; } else {}
    printf("La somme est: %d\n", a + b);
    return 0;
}