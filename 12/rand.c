#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("%s", rand() % 2 ? "Pile" : "Face");
}