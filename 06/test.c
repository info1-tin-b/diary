#include <stdio.h> 

int main() {
    int i,j=42;
    int r = sscanf("1568", "%d%d", &i, &j);
    printf("%d, %d, %d\n", i, j, r);
}