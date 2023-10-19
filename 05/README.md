# Semaine 05/16

- TE1 : 6 novembre à 13h15
- TE2 : 15 janvier à 13h15

- [ ] printf 
- [ ] scanf 
- [ ] Decimal 2 binaire (optimisé et pas optimisé)



## Commentaires 

- `//`
- `/**/`

Un commentaire doit TOUJOURS expliquer POURQUOI et pas COMMENT.

## Constantes littérales

```c
int i = 42; // int
unsigned int j = 42u; // unsigned int
unsigned long long l = 42ull;
float f = 3.1415f; // float
float u = 3.14; // double
```

## Types a taille fixe

```c
#include <stdint.h>
#include <stdlib.h>

int main() {
    int toto = 42;
    int32_t tata = 42; // Très exactement 32-bit
    int_least32_t tutu = 42; // Type qui a au moins 32-bits
    int_fast16_t toutou = 42; // Le type le plus rapide pour le CPU
    size_t i = 42; // unsigned long int
}
```

## Promotion des entiers

```c
char u = 42;
char v = 23;
char w = u + v; 
```

```
(char) + (char) ---> (int)
(short) + (char) ---> (int)
(int) + (long long) ---> (long long)

(float) + ((int) % (int))
(float) + (int) --> (double)
```

## Concernant le labo

