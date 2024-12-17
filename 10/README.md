# Semaine 10/16

- [ ] Tableaux multidimensionnels
- [ ] Conventions d'appel des fonctions
- [ ] Passage par adresse

## Passage par addresse

- `&` : 
  - Soit l'opérateur bit à bit `&` (AND), 
  - Soit l'opérateur d'adresse `&` que l'on prononce "L'adresse de".
- `*` : 
  - Soit l'opération multiplication (`a * b`),
  - Soit l'opérateur de déréférencement `*` que l'on prononce "Contenu de". (ex: `*p = 42`)
  - Soit le type pointeur (`int *p`)

```c
int foo(int a, int* d) {
    a += 2;
    return 0;
}
```

```c
int main() {
    int a;
    int r = scanf("%d", &a);
}
```


## Tableaux unidimensionnel

```c
int main() {
    int toto[10] = {4,8,15,16,23,42, [9]=108};
    
    // J'associe des valeurs à la main
    toto[0] = 2;
    toto[1] = 3;

    const int size = sizeof(toto) / sizeof(toto[0]);
    for (int i = 0; i < size; ++i) {
        printf("%d ", toto[i]);
    }
}
```

```c
int data[10];

data[5] // *(data + 5)
a[b] // *(a + b)
b[a] // *(b + a)
```

## Tableaux multidimensionnels

```c
int main() {
    int m[9] = {1,2,3,4,5,6,7,8,9};

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%d ", m[y + 3*x]);
        }
        printf("\n");
    }
}
```

```c
int main() {
    int m[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", m[row][col]);
        }
        printf("\n");
    }
}
```