#include <stdio.h>

int main()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

#if 0
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", a[3*row + col]);
        }
        puts("");
    }
#else 
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i) {
        printf("%d", a[i]);
        printf("%c", (i+1) % 3 == 0 ? '\n' : ' ');
    }
#endif
}