#include <stdio.h>

/**
 * Recherche dichotomique
 * @param haysack est le tableau d'entrée
 * @param size est le nombre d'éléments du tableau
 * @param needle est la valeur recherchée
 * @return NULL si non trouvé sinon l'adresse de l'élément  (ex: &haysack[23])
 */
int *bsearch(int haysack[], int size, int needle) {

}

int main() {
    int a[] = {2,5,13,23,42,56,73,98,103,142,166,167,168,190,200,215};
    int *p = bsearch(a, sizeof(a)/sizeof(a[0]), 23);
    if (p == 0) {
        printf("Pas trouvé\n");
    } else {
        printf("Trouvé à l'indice: %ld\n", (int)(a - p) / sizeof(int));
    }
}