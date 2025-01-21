# Semaine 16/16

- [x] Notes labos ? Tiré au sort 2 7 10
- [x] Labo (fin)
- [ ] Correction Viginère
- [ ] Série d'exercices 0x10
  - [x] Exercice 1
  - [ ] Exercice 2 (a, b OK, reste c d e f)
- [ ] Exercice Spirale
- [ ] Questions
- [ ] Collation 

## Série d'exercice

```c
long int strcmp(char *s1, char *s2); 
// 0 si les deux chaînes sont identiques
// < 0 si s1 < s2
// > 0 si s1 > s2

// abc
// abcdef
long int strncmp(char *s1, char *s2, size_t n);

if (strncmp("abc", "abcdef", 3) == 0) {
    printf("Les trois premiers caractères sont identiques\n");
}
```

### Inversion bit à bit: 

```c
int a = 0b10101010;
int b = ~a; // 0b01010101
int c = a ^ 0xFF; // 0b01010101
```

Swap avec xor :

```c
int a = 0b00100110;
int b = 0b11100100;

a = a ^ b; // 0b11000010
b = a ^ b; // 0b00100110
a = a ^ b; // 0b11100100
```

### Tableaux 

```c
int a[] = 0; // Pas valide 
int a[10]; // Oui
int a[10] = 1,2,3,4,5; // Pas valide
int a[10] = {1,2,3,4,5}; // Oui 
int a[10] = {0}; // Oui
int a[10] = {[3]=3}; // Oui
int a[3]; a = {1,2,3} // Pas valide
int a[] = {1,2,3}; // Oui (taille de 3)
memcpy(a, (int[3]){1,2,3}, 3*sizeof(int)); // Info2 (oui valide)

int a[10] = {0};
int b[10] = {1,2,3,4,5,6,7,8};
for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) { a[i] = b[i]; }
memcpy(a, b, sizeof(a));
```

### Pointeurs

```c
int p[10]; // Tableau de 10 entiers, p pointe sur le premier élément
sizeof(p) // Taille du tableau en octets à 
          // condition que le tableau aie une taille connue
int *p; // Pointeur sur un entier

int *p[10]; // p est un tableau de 10 pointeurs sur des entiers
int (*p)[10]; // p est un pointeur sur un tableau de 10 entiers
int (*p)(int, int); // Info2: p est un pointeur sur une fonction qui prend deux entiers et retourne un entier


int a[] = {1,2,3,4,5}; // Tableau modifiable
int *p = a; // Pointeur sur un tableau modifiable
int *b = {1,2,3,4,5}; // Tableau non modifiable
void foo(int *p) { p[0] = 42; }
void bar(int p[]) { p[0] = 42; }
foo(a); // OK
foo(b); // Erreur
bar(a); // OK
bar(b); // Erreur

int a[10] = {1,2,3,4,5,6,7,8,9,10};

3[a] === a[3] === *(a + 3) === *(3 + a); // 4
```

### Constante littérale

```c
int i = 42; // À l'initialisation de i on copie la constante littérale 42
char *p = "salut"; // p pointe sur la constante littérale "salut" et est non modifiable

## Viginere

### Objectif

Écrire un programme complet qui reçoit en argument deux chaînes de caractères **supposées en minuscules** : la chaîne à encoder et en second argument la clé de chiffrement. Voici trois exemples d'utilisation du programme :

```bash
$ ./vigenere "sacqueboute" "vent"
nepjpiohpxr
$ ./vigenere "abc" "a"
abc
$ ./vigenere "aabb" "bc"
bccd
```

### Vowels

int vowel(const char *s) {
    char *v = "aeiouy";
    size_t v_size = strlen(v);
    int count = 0;

    while(*s != '\0') {
        for (int i = 0; i < v_size; i++) {
            count += (*s == v[i]);
        }
        s++;
    }
    return count;
}

if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'y') {
    count++;
}
count += (*s == 'a' || *s == 'e' || 
          *s == 'i' || *s == 'o' || 
          *s == 'u' || *s == 'y');

### Max Interval 

int max_interval(int a[], size_t s) {
    int max = 0;
    for (int i = 1; i < s; i++) // s = 3, 0 1
        if (abs(a[i] - a[i-1]) > max) max = abs(a[i] - a[i-1]);
    return max;
}

## Viginère

Le programme encode la chaîne de caractères en utilisant le chiffrement de Vigenère qui repose sur le décalage des caractères de la chaîne de caractères par les caractères de la clé. Voici le principe de fonctionnement du chiffrement de Vigenère :

### Principe de fonctionnement

1. **Parcours du message et de la clé :**  
   Le message est traité caractère par caractère. Simultanément, la clé avance aussi caractère par caractère jusqu'à la fin de la chaîne détectée par la sentinelle de fin. Si la clé est plus courte que le message, elle est répétée autant de fois que nécessaire pour couvrir la longueur totale du message.

2. **Calcul du décalage :**  
   Chaque caractère du message est décalé dans l'alphabet en fonction de la position du caractère correspondant de la clé, ceci modulo 26.  
   - Par exemple, le premier caractère `s` (18) décalé de `v` (21) modulo 26 donne `18 + 21 mod 26 = 13`, qui correspond au caractère `n`.
   - Pour le second caractère `a` (0) décalé de `e` (4) modulo 26 donne `0 + 4 mod 26 = 4`, qui correspond au caractère `e`.

3. **Répétition de la clé :**  
   Une fois arrivé au bout de la clé (dont la taille peut être obtenue avec `strlen`), le décalage reprend depuis le début de la clé.  
   - Par exemple, à partir du premier `u` (20) décalé de `v` (21) modulo 26 donne `20 + 21 mod 26 = 15`, qui correspond au caractère `p`.

### Cahier des charges

- Le programme doit être complet (include, main, fonctions, etc.).
- L'encodage de Vigenère suit le prototype `void vigenere(const char s[], const char key[])`.
- La fonction `vigenere` affiche le message encodé sur la sortie standard.
- Le programme vérifie que le nombre d'arguments est correct.
- En cas d'erreur, le programme retourne `1`.

### Bonus

- Le programme convertit les caractères reçus en minuscules avant de les encoder, à supposer que les chaînes reçues peuvent aussi être en majuscules.

## Spirale

### Objectif

Un tableau de 17x17 est accessible par un pointeur sur des `char`. Une fonction de traitement est donnée par le prototype ci-dessous. La variable `s` donne la taille du tableau (nombre d'éléments).

```c
void spirale(char *m, size_t s); 
```

Dans un premier temps, faisons simple :  

- Le tableau est initialisé à '.'
- Le centre du tableau est initialisé à '$'
- Un cercle occupant la moitié de la surface du tableau est dessiné à partir du centre avec le caractère '#'.

Ensuite en utilisant une boucle de 1000 itérations, dessiner une spirale décrivant 3 tours du tableau. La spirale est dessinée avec le caractère '#'.
