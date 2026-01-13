# Semaine 16/16 (mais pas vraiment)

## Structures

Les structures en C permettent de regrouper plusieurs variables sous un même type. Cela est particulièrement utile pour représenter des objets complexes. Voici un exemple simple d'une structure représentant un point dans l'espace 3D :

```c
#include <math.h>

typedef struct {
    double x;
    double y;
    double z;
} Point;
```

## Union

Les unions sont similaires aux structures, mais elles permettent de stocker différentes données dans le même espace mémoire. Cela signifie qu'une union ne peut contenir qu'un seul de ses membres à la fois. Voici un exemple d'une union pouvant contenir soit un entier, soit un flottant :

```c
#include <stdio.h>

typedef union {
    int i;
    float f;
} IntOrFloat;
```


Exemple Quake3

```c
// i  = * ( long * ) &y;   avec une union
typedef union {
    float f;
    int i;
} FloatIntUnion;

FloatIntUnion u;
u.f = y;
int i = u.i;
```


(((te1 + te2)/2 + (l6 + lt1 + lt2)/3)/2 + ex)/2