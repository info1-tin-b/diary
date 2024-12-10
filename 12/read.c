#include <stdio.h>
#include <limits.h>
int data[100000];


int max(int data[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        max = data[i] > max ? data[i] : max;
    }
    return max;
}

int main() {
    int i = 0;
    while(!feof(stdin)) {
        float age;
        if (scanf("%f", &age) != 1) {
            break;
        }
        data[i++] = age;
    }

    printf("L'age maximum est %d", max(data, i));
}