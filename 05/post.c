#include <stdio.h>

int main() {
    int i = 42;
    // Si ++ est à droite, on fait une post-incrémentation
    // Donc on récupère la valeur de i avant de l'incrémenter
    assert(i++ == 42);
    assert(i == 43);
    assert(++i == 44);
    assert(i == 44);
}