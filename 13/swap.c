#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void badswap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int array[] = {4,8,15,16,23,42};
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }
    puts("-----------");
    //swap(&array[1], &array[4]);
    badswap(array[1], array[4]);
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }    
}
