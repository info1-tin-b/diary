# Semaine 11/16

- [x] Passage par adresse
- [x] Lecture des arguments avec valeurs par défaut (voir arguments.c)
- [ ] Suite du labo

## Passage par adresse

En C on peut passer des paramètres à une fonction de deux manières : 

- par valeur ou 
- par adresse.

Dans tous les cas les valeurs ou les adresses sont copiées dans la pile (stack).

```c
int *a;  // Une variable qui contient une adresse vers un entier
int b;   // Une variable qui contient un entier
*a = 42; // On va chercher la valeur à l'adresse contenue dans a et on y écrit 42
&a       // L'adresse de a
```