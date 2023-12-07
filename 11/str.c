#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Les biscuits so\0nt cuits!";
    char b[100] = "J'aime pas les biscuits!";

    strcpy(b, &a[5]);

    printf("a = %s\n", a);
    printf("b = %s\n", b);
    for(int i = 0; i < sizeof(b); i++) printf("%c", b[i]);
    printf("\n");

    char c = a[5];
    a[5] = '\0';
    strcpy(b, a);
    a[5] = c;

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    strncpy(b, a, 5);

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    strcat(b, a);

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    char *start = strchr(a, 'u');
    printf("start = %s\n", start);
}