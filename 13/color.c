#include <stdio.h>

int main() {
    int color[] = {31, 32, 33, 34, 35, 36, 37};
    for (int i = 0; i < sizeof(color)/sizeof(color[0]); i++)
        printf("\033[%dmHello, World!\033[0m\n", color[i]);

}