#include <stdio.h>

int main() {
    int i;
    for (i = 'a'; i < 'd'; printf("%c-", ++i)) {
        //rien
    }
}