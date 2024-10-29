#include <stdio.h>

int main() {
    int i = 0;
    int counter = 10;
    while(counter > 0) {
        printf("%d ", i++);
        counter--;
    }
}