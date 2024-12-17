# Semaine 13/16

- [ ] Tableaux multidimensionnels
  - [ ] Rappels sur les tableaux
  - [ ] Spécificité du type tableau
  - [ ] Rappel de l'opérateur sizeof
  - [ ] Exercice taille (différents types)
- [ ] Tag et génération version avec Git
- [ ] Enum et structs
- [ ] size_t

## Exercices

### Transposée

Soit une matrice de 3x3, écrire une fonction telle que cette dernière
transpose la matrice au sens mathématique.

```c
void transpose(int *m, int rows, int cols);
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
