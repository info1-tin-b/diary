#include <stdio.h>

// Sucres Syntaxiques:
// char *u  === char u[] 
// *(a + b) === a[b]

int main(int argc, char **argv) {
    char *a = "foo";
    char *b = "bar";
    char *c = "baz";
    char *v[] = {a, b, c};

    char d = *v[0];
    printf("%c", d);

    // char *p = *(argv + 1);

    // for (int i = 1; i < argc; i++) {
    //     char *arg = argv[i];

    //     printf("%s", arg);
    //     if (arg = '-')
    // }
}