#include <stdio.h>
#include <string.h>

long int my_strlen(char *p) {
    int counter = 0;
    while(*(p++)) {
        counter++;
    }
    return counter;
}

int main() {
    char t[] = "Tu aimes les biscuits ?";

    for (int i = 0; i < strlen(t); i++) {
        if (t[i] == ' ') {
            for (int j = i; j < strlen(t); j++) {
                t[j] = t[j+1];
            }
        }
    }
    printf("%ld, %ld\n", sizeof(t), strlen(t)); 

    printf("%s\n", t);
}