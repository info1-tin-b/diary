#include <stdio.h>
#include <assert.h>

int main() {
    int a = 42;
    int b = 0x2a;
    int c = 052;
    int d = 0b101010;
    int e = '\x2a';
    int f = '\52';
    int g = '*';

    assert (a == b);
    assert (b == c);
    assert (c == d);
    assert (d == e);
    assert (e == f);
    assert (a == g);
}