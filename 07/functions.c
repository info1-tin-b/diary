#include <stdio.h>
#include <string.h>

void upper(char s[]) {
    const int size = strlen(s);
    for (int i = 0; i < size; i++) {
        s[i] = s[i] + ('A' - 'a');
    }
}

void hello(int a, int b, int c) {
    printf("%d %d %d\n", a, b, c);
}

int main(int argc, char *argv[]) {
    int a = 1, b = 2, c = 3;
    hello(c, b, a);

    char u[] = "hello";
    upper(u);
    printf("%s\n", u);
}
