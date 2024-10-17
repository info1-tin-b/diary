#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a, b, c, d;

    a = false;
    b = false;
    c = a && !b;
    d = !(!a || b);
    printf("%d %d %d %d\n", a, b, c, d);

    a = false;
    b = true;
    c = a && !b;
    d = !(!a || b);
    printf("%d %d %d %d\n", a, b, c, d);

    a = true;
    b = false;
    c = a && !b;
    d = !(!a || b);
    printf("%d %d %d %d\n", a, b, c, d);

    a = true;
    b = true;
    c = a && !b;
    d = !(!a || b);
    printf("%d %d %d %d\n", a, b, c, d);
}