# Semaine 10/16

- [x] Préprocesseur
  - [x] `#if`, `#ifdef`, `#ifndef`, `#else`, `#endif`
  - [x] `#define`
  - [x] `#include`
  - [x] `gcc -E`
- [.] Passage de paramètres aux fonctions
  - [x] Passage par valeur
  - [x] Passage par adresse
  - [x] Passage sur le stack ou via registres ?
  - [ ] Promotion float/double
  - [ ] Mot clé `register`
- [ ] Tableaux
  - [ ] Type Tableau
  - [ ] Tableaux multidimensionnels

## Préprocesseur 

```c
#define SYMBOL Valeur
#define SYMBOL=Valeur // Attention ! Ca fonctionne pas, le égal fait partie de la définition
```

Si le symbole est déjà défini ailleurs:

```c
#if !defined TOTO
#define TOTO 42
#endif 
```

Je ne souhaite jamais exécuter un bloc 

```c
#if 0
du code...
#endif 
```

Si vous voulez le réactiver:

```c
if 1 
du code ...
#endif 
```

Si c'est une fonctionnalité conditionnelle déterminée à la compilation

```c
#define VERBOSE // soit l'ajouter à la compilation `gcc -DVERBOSE test.c`
...
int main() {
    #ifdef VERBOSE
    printf("Je suis très verbeux...\n");
    #endif
}
```

Notation courte:

```c
#if defined TOTO
#endif
équivalent à 
#ifdef TOTO 
#endif 
```

Pour éviter une répétition de code 

```c
#define TESTARG(num, var) argc > num && sscanf(argv[num], "%d", &var) != 1

if (TESTARG(1, a)) {
}
if (TESTARG(2, b)) {
}
```

Exemple à ne pas reproduire (en examen), (seulement pour s'amuser, mais pas pendant l'examen):

```c
#define U main
#define W int argc,
#define X char*
#define notif if
#define restart return 
#define scanf printf

int U(W X argv[]) {
    notif (argc < 2) restart 1;
    scanf("%s\n", argv[1]);
}
```

## §6.5.2.2 Function Calls

- 6. Promotion `float` en `double`

Lorsqu'une fonction prend plus que 4 arguments (sur une architecture ARM), 
les 4 premiers arguments sont passés sur les registres processeur, ici r0 à r3, 
et les arguments suivants sont passés sur le stack. 

Il est donc faux de dire que tout est toujours passé par le stack. En réalité le processeur optimise le passage d'arguments pour gagner du temps. 

En pratique, on essaye d'avoir des fonctions qui prennent moins de 4 arguments.

```c
extern int foo(int, int, int, int, int, int );

int main() {
    foo(2, 3, 4, 5, 6, 7);
}
```

```text
main:
        mov     r2, #6
        mov     r3, #7
        str     lr, [sp, #-4]!
        sub     sp, sp, #12
        stm     sp, {r2, r3}
        mov     r1, #3
        mov     r3, #5
        mov     r2, #4
        mov     r0, #2
        bl      foo(int, int, int, int, int, int)
        mov     r0, #0
        add     sp, sp, #12
        ldr     pc, [sp], #4
```