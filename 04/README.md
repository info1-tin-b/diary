# Semaine 04/16

## Types de données

- Numériques
  - Entières
    - Signées (Complément à deux)
    - Pas signées 
  - Réelles
- Chaîne de caractère

### Booléen

Il est stocké sur un entier (`int`, soit 32-bits),
ce n'est pas un vrai type C.

- Vrai : True : 1
- Faux : False : 0

```c
#include <stdbool.h>
int main() {
    bool u = false;
}
```

### Numériques

- Integer `char`, `short`, `int`, `signed int`, `long`, `long long`
- Unsigned Integer `unsigned char`, `unsigned short`, `unsigned int`, `unsigned long`, `unsigned long long`
- Réels `float`, `double`

```text
Type       Taille (bit)    Taille (byte)    Min Max        Min Max Signé
char        8              1                0..255         -128..+127 
short      16              2                0..65535       -32768..+32767
int        32              4                0..4294967295  -2147483648..+2147483647
long       32              4
long long  64              8
float      32              4
double     64              8
```

## Embranchements

```c
if () {} else {}
if (2 > 5) { printf("A\n"; )} else { printf("B\n");}
```

## Sscanf/Atoi (Scanf)

- `atoi` Décoder une chaîne de caractère en un entier. Si il n'arrive pas à le faire il retourne 0. Donc : pas de gestion d'erreur
- `sscanf` Décode une chaîne de caractère **passée en paramètre**, selon un format spécifié. Et la fonction retourne le nombre d'éléments correctements décodés.
  
- `scanf` Décode une chaîne de caractère **reçue sur l'entrée standard**, selon un format spécifié. Et la fonction retourne le nombre d'éléments correctements décodés.

```c
int main() {
    int a;
    scanf("%d", &a); // Je vais lire un nombre sur l'entrée standard (au clavier)

    sscanf("42", "%d", &a); // Je décode la chaîne "42" en un entier 42 stocké dans a

    // Mais... On doit toujours tester la valeur de retour de scanf...
}
```
## Valeurs de retour

```c
int main(int argc, char *argv[]) {
    if (argc < 3) { return 1; } else {}
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("La somme est: %d\n", a + b);
    return 0;
}