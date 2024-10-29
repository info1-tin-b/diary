#include <stdio.h>
#define TRUC chocolat
#define BISCUIT(a,duchmol) (a + duchmol)
#define CR puts("")
#define REPEAT(count) for(int i = 0; i < count; i++) printf("-"); 
#define M int main (
#define U {
#define V }

M) U
    printf("%d\n", BISCUIT(4,5) * BISCUIT(6,8));
    REPEAT(10);
    CR;
    REPEAT(20);
    CR; V