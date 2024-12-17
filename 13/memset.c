#include <string.h>
#include <stdio.h>

#define ARRAY_SIZE(t) (sizeof(t) / sizeof(t[0]))

int main()
{
    int tableau[9];
    memset(tableau, 0, sizeof(tableau));

    for (int i = 0; i < ARRAY_SIZE(tableau); i++) {
        printf("%08x ", tableau[i]);
    }
}