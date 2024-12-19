#include <stdio.h>
#include <stdint.h>
/**
 * Recherche dichotomique
 * @param haysack est le tableau d'entrée
 * @param size est le nombre d'éléments du tableau
 * @param needle est la valeur recherchée
 * @return NULL si non trouvé sinon l'adresse de l'élément  (ex: &haysack[23])
 */
int *bsearch(int haysack[], int size, int needle) {
    int min = 0;
    int max = size - 1;
    int mid = (max - min) / 2 + min;
    while (min <= max) {
        if (haysack[mid] == needle) {
            return &haysack[mid];
        } else if (haysack[mid] < needle) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
        mid = (max - min) / 2 + min;
    }
    return 0;
}

int main() {
    int a[] = {2,5,13,23,42,56,73,98,103,142,166,167,168,190,200,215};
    int *p = bsearch(a, sizeof(a)/sizeof(a[0]), 215);
    if (p == 0) {
        printf("Pas trouvé\n");
    } else {
        printf("Trouvé à l'indice: %ld\n", (uintptr_t)(p - a));
    }
}