# Semaine 10/16

- [ ] Préprocesseur
  - [ ] `#if`, `#ifdef`, `#ifndef`, `#else`, `#endif`
  - [ ] `#define`
  - [ ] `#include`
  - [ ] `gcc -E`
- [ ] Passage de paramètres aux fonctions
  - [ ] Passage par valeur
  - [ ] Passage par adresse
  - [ ] Notion de `register`?
- [ ] Tableaux
  - [ ] Type Tableau
  - [ ] Tableaux multidimensionnels

## §6.5.2.2 Function Calls

- 6. Promotion `float` en `double`
- Passage par registres

```c
extern int foo(int, int , int);

int main() {
    foo(2,3,4); // edx, esi, edi
}
```
