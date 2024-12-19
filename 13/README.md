# Semaine 13/16

- [ ] Tableaux multidimensionnels
  - [ ] Rappels sur les tableaux
  - [ ] Spécificité du type tableau
  - [ ] Rappel de l'opérateur sizeof
  - [ ] Exercice taille (différents types)
- [ ] Tag et génération version avec Git
- [ ] Enum et structs
- [ ] size_t

## Passage par adresse 

Voir exemple [Quadratic](./quadratic.c) et [Swap](./swap.c)

## Sizeof Strlen

### Sizeof

`sizeof` littéralement *taille de*, retourne la taille en **octet** d'une
variable ou d'un type de donnée. 

```c
assert(sizeof(int32_t) == 4)
assert(sizeof(int64_t) == 8)
char c;
assert(sizeof(c) == 1)

char a[] = {1,2,3};
assert(sizeof(a) == 3)
char b[5] = {1,2};
assert(sizeof(b) == 5)
char c[] = "salut" // constante littérale + sentinelle de fin
assert(sizeof(c) == 6)
char d[] = {'s', 'a', 'l', 'u', 't'};
assert(sizeof(d) == 5)

int32_t e[4];
assert(sizeof(e) == 16)

char f = 'd';
assert(sizeof(f) == 1)

char *g[] = {"petit", "bonhomme", "en", "mousse"};
```

## Exercices

### Transposée

Soit une matrice de 3x3, écrire une fonction telle que cette dernière
transpose la matrice au sens mathématique.

**Cas simple**

```c
void transpose(int m[3][3]);
```

**Cas générique**

```c
void transpose(int *m, int rows, int cols);
```

### Recherche dichotomique (*binary search*) 

Soit un tableau unidimensionnel contenant des valeurs triées p.ex :

```c
int a[] = {2,5,13,23,42,56,73,98,103,142,166,167,168,190,200,215};
```

Implémenter la fonction bsearch qui recherche une valeur dans le tableau.

```c
/**
 * Recherche dichotomique
 * @param haysack est le tableau d'entrée
 * @param size est le nombre d'éléments du tableau
 * @param needle est la valeur recherchée
 * @return NULL si non trouvé sinon l'adresse de l'élément  (ex: &haysack[23])
 */
int* bsearch(int haysack[], int size, int needle);
```

## Tableaux 

- Taille 9 x sizeof(int) = 36 bytes = 344 bits
- Le tableau il est réservé sur le *stack* (pile)
- Le tableau est non initialisé si déclaré en local, mais initialisé à zéro en global

```c
int tableau[9];
```

### Initialisation

- On initialise un tableau avec la syntaxe `= {valeurs}`
- Les valeurs mentionnées seront initialisées, et les autres à zéro
- On peut spécifier une valeur particulière avec la syntaxe `[n]=valeur`
- On ne peut pas réinitialiser un tableau 
```c
int tableau[9] = {1,2,3,4, [5]=42};
```

### Initialiser un tableau manuellement

```c
#include <string.h>
#define ARRAY_SIZE(t) (sizeof(t) / sizeof(t[0]))
int tableau[9];

for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]), ++i) {
    tableau[i] = 0;
}

// 1. Pointeur vers le tableau
// 2. Valeur pour chaque byte
// 3. Taille en byte
memset(tableau, 0, sizeof(tableau));
```

### Unidimensionnel en bidimensionnel 

```c
int a[9] = {1,2,3,4,5,6,7,8,9};

for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
        printf("%d ", a[3*row + col]);
    }
    puts("");
}
```

### Tableaux bidimensionnels

```c
int a[3][3] = {
    {1,2,3},
    {4,5},
    {7,8,9}};
