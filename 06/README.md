# Semaine 06/16

- [x] Macros
- [ ] Boucles
    - [x] while 
    - [x] for
    - [ ] do while
- [ ] Conventions de nommage

## Questions

```c
printf("#%3");  // Format invalide 

printf("%+4d", -42);  // Affiche " -42"

printf("%5.2f", 3.14159);  // Affiche " 3.14"

```

## Conventions de nommage

- snake_case : ma_super_variable
- camelCase : maSuperVariable
- PascalCase : MaSuperVariable
- kebab-case : ma-super-variable
- SCREAMING_SNAKE_CASE : MA_SUPER_VARIABLE
- Hungarian notation : iMaSuperVariable
- Mixed_Case : Ma_Super_Variable

```c
int distanceBall_mm
```

## Macros

Une macro est une directive du préprocesseur qui permet de définir un symbole qui sera remplacé par une expression ou une suite d'instructions.

L'opération est effecutée AVANT la compilation par le préprocesseur.

Il existe deux types de macros : avec et sans paramètres.

La différence avec une variable constante est que la macro n'a pas de type et n'est pas stockée en mémoire. Parfois c'est un avantage.

## SCANF

Il faut toujours contrôler la valeur de retour de scanf.

## Boucles

- while
- for
- do while

### While

While est un mot anglais qui veut dire "tant que". C'est une boucle qui répète un bloc d'instructions tant qu'une condition est vraie.

```c
while (condition) {
    // instructions
}
```

### Do While

Le do while est une boucle qui répète un bloc d'instructions tant qu'une condition est vraie. La différence avec le while est que le bloc d'instructions est exécuté au moins une fois.

```c
do {
    // instructions
} while (condition);
```

### Assembleur 

```c
int foo(int n, int p) {
    for (int i = 0; i < n; i++) {
        p += n;
    }
    return p;
} 
```

```
foo(int, int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], edi
        mov     DWORD PTR [rbp-24], esi
        mov     DWORD PTR [rbp-4], 0
        jmp     .L2
.L3:
        mov     eax, DWORD PTR [rbp-20]
        add     DWORD PTR [rbp-24], eax
        add     DWORD PTR [rbp-4], 1
.L2:
        mov     eax, DWORD PTR [rbp-4]
        cmp     eax, DWORD PTR [rbp-20]
        jl      .L3
        mov     eax, DWORD PTR [rbp-24]
        pop     rbp
        ret
```