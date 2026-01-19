# Semaine 16/16 

## Environnement de développement

- Calc
- Raccourcis clavier
  - Win+R Exécuter
  - Win+L Vérouille l'ordinateur 
  - Win+E Explorateur
- WSL (Windows Subsystem for Linux)
  - Ubuntu 24.04 LTS
- Git (Logiciel de gestion de version)
  - Clé SSH
- Visual Studio Code
- GitHub

## Numération 

- Binaire, Décimale, Octale, Hexadécimale
- Représentation des nombres dans l'ordinateur
  - Non signée
  - Complément à deux ( ~N + 1 )
- Types de données
  - Taille (1 byte, 2 bytes, 4 bytes, 8 bytes)
  - Signé ou non
  - `int`, `long int`, `unsigned long int`...
- IEEE754: float (4), double (8)
  - 0.1 + 0.2 != 0.3

## Programmes

- Entrée standard
- Sortie standard
- Sortie d'erreur
- Arguemnts
- Status de sortie

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Lecture des arguments 
    if (argc < 3) return ERROR;
    int i = atoi(argv[1]);
    float f = atof(argv[2]); // Pas de contrôle d'erreur
    if (sscanf(argv[2], "P%3d/%2dT%2d", &a, &b, &c) != 3) return ERROR;

    // Lire sur l'entrée standard
    char c = getchar();
    if (scanf("P%3d/%2dT%2d", &a, &b, &c) != 3) return ERROR;
    return status_sortie;

    // Ecriture sur la sortie standard
    putchar('c');
    puts("chaîne de caractère suivi d'un retour à la ligne");
    printf("Tu as gagné %d cadeaux\n", 42);
    fprintf(stderr, "error... %c", 'd');

    // Gestion du flux
    while(!feof(stdin)) {
        // EOF == 255 == -1
        if (scanf("%d", &a) == EOF) { return ERROR; }
    }
}
```

## Exécution en ligne de commande

```bash
$ cowsay "salut"
$ echo "salut" | cowsay 
$ echo "salut" | cowsay -d
```

- CTRL+C : SIGINT, interrompt l'exécution du programme
- CTRL+D : EOF, envoie un fin de fichier dans l'entrée standard

## Compilateur

```bash
$ gcc main.c # Produit un fichier a.out
$ ./a.out # Préfixe ./
$ gcc main.c -lm # Charge la bibliothèque mathématique
$ gcc main.c -std=c20 -Wall -Wextra -pedantic
$ gcc -E main.c # Lance uniquement le préprocesseur
```

## Préprocesseur

```c
#include "toto.h" // Inclu un fichier h local
#include <stdio.h> // Inclu une bibliothèque système

#define SYMBOL 42
#define MACRO(x, y) (x + y * 2 * y)

#if SYMBOL == 42
...
#else
...
#endif

#ifdef SYMBOL
#endif 

#ifndef SYMBOL 
#endif 
```

## Variable

- Identifiant (`abc`, `8pie` (pas autorisé), `_salut`)
  - Minuscules
  - Notation SnakeCase, CamelCase
- Valeur mémoire 
- Taille (en bytes)
- Format (entier signé, float...)

## Gestion des arguments

```c
int main(int argc, char *argv[]) {
    float e = 42.0;
    for (int arg = 1; arg < argc; arg++) {
        if (strcmp(argv[arg], "-h") == 0) { help(); exit(0); }
        if (sscanf(argv[arg], "-e%f", &e) == 1) continue;
    }
}
```

## Fonctions 

```c
type_retour nom_fonction(type_param1 nom_param1, ...) {
    corps de la fonction
    return valeur correspondant au type de retour
}

double delta(double a, double b, double c) {
    return b * b - 4 * a * c;
}

double ratio(int num, int den) {
    return num / den; // Pas bien parce que je fais une division entière
    return (double)num / (double)den; 
}
```

À connaître par coeur:

- Moyenne
- Swap
- Somme
- Help, Version

## Bibliothèques standards

- `<math.h> sin, cos, tan, sqrt, log10, log`
- `<stdio.h> printf, scanf`
- `<stdlib.h> EXIT_SUCCESS, EXIT_FAILURE, rand, exit, atoi, atof`
- `<string.h> strcmp, strstr, memcpy`
- `<stdint.h> int32_t, int_least32_t, uint_fast16_t`
- `<limits.h> INT_MAX INT_MIN`
- `<ctype.h> is_alpha, is_digit, tolower()`
- `<stdbool.h> false, true, bool`

## Constantes littérales

```c
42 
42L
42LL
42ULL
unsigned long int u;
u < 42UL
0x1234
0301
0b10010011110
"chaines"
'a'
```

## Caractères et les chaînes de caractères

- Caractère est stocké sur 8-bit pour l'ASCII
- Table ASCII comporte 128 caractères 
- `\n`, `\r`, `\t` Espacement
- `\0` Sentinelle de fin
- `💩` Caractère unicode (UTF-8) encodé sur 1 à 4 bytes
- `0x30 == '0'`
- `97 == 'a'`
- `0xa == '\n'`
- `0xff == EOF`
- `0x00 == '\0'`

```c
char c = 'c'; // 99
printf("%hhd, %c, 0x%hhx", c, c, c);

char *s = "Hello";  // Pas modifiable
assert(strlen(s) == 5) // + la sentielle de fin
assert(sizeof(s) == 8) // taille du pointeur

char s[] = "Hello";
assert(strlen(s) == 5)
assert(sizeof(s) == 6) // Taille du tableau
```

## Tableaux

```c
int m[10]; // Tableau de 10 valeurs non initalisé
int n[5] = {1,2,3,4,5};
int o[5] = {0}; // Initialise le premier à 0 et le reste à zéro
int p[5] = {1,2} // {1,2,0,0,0}

assert(n[1] == 2) 

for (int i = 0; i < sizeof(m) / sizeof(m[0]); i++) {
    m[i] *= 2;
}

#define ROWS 5
#define COLS 6
int grid[ROWS][COLS];
grid[3][5] = 8;

assert(sizeof(grid) == ROWS + COLS + sizeof(int))
```

## Structure de contrôles

### If

```c
if (expression_a_valider) {
    // si vrai
} else if (sous_condition) {
} else {
    // si faux
}
```

### Switch

```c
switch(value) {
    case 42: 
        // expressions
        break; // important pour pas passer au cas suivant.
    case 23:
        ...
    default: 
        // Cas par défaut
}
```

### Boucles

- for: connaît le nombre d'itérations
- while: connaît pas le nombre d'itérations
- do...while: veut au moins faire un tour de boucle

```c
int m[128];
int sum = 0;
for (int i = 0; i < 128; i++) { sum += m[i]; }
int i = 0;
while(i < 128) { sum += m[i]; i++; }
int i = 0;
do { sum += m[0] } while ( i++ < 128 );

for (int i=0, j=10; i < j; i++, j--) {
    swap(&m[i], &m[j]); 
} 

for (int i = 0; i < 10; i++) {
    if (i%2==0) { continue; }
    if (i > 7) break;
}

int t = 0;
while(carburant <= 0 && altitude < TARGET_ALTITUDE) {
    if (t % 5 == 0) {
        printf("%g %g %g %g\n", t, altitude, carburant...);
    }
    t += DT;
}
```

## Opérateurs

```c
()++; // expression; i = i + 1;
++(); // i = i + 1; expression;
()--; // expression; i = i - 1;
--(); // i = i - 1; expression;

i += 1; // i = i + 1; Addition
i -= 1; // i = i - 1; Soustraction
i *= 2; // i = i * 2; Multiplication
i /= 2; // i = i / 2; Division
i %= 2; // i = i % 2; Modulo
i ^= 2; // i = i ^ 2; OR Exclusif XOR
i &= 2; // i = i & 2; AND 
i |= 2; // i = i | 2; OR 
i <<= 2; // i = i << 2; Décalage à gauche (*2)
i >>= 2; // i = i >> 2; Décalage à droite (/2)
```

Opérateur ternaire

```c
int vrai = 42, faux = 23;
int resultat = a > b ? vrai : faux;
```


## Pointeur, passage par adresse

```c
int v = 42;
int *p = &v; // Le & correspond l'adresse de

scanf("%d", &v)

void swap(int *u, int *v) {
    int tmp = *u;
    *u = *v;
    *v = tmp;
}
```

##




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