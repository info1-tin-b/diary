#include <stdio.h>

int weber(int a) {
    return 2 * a;
}

int luna(int a, int b) {
    return a + weber(b);
}

int luisoni(int a) {
    return a - 2;
}

int chevallier() {
    int a = 23;
    int b = 42;
    return luna(a, luisoni(b));
}

int main() {
    chevallier();
}