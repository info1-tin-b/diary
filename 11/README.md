# Semaine 11/16

- [x] Passage par adresse
- [x] Lecture des arguments avec valeurs par défaut (voir arguments.c)
- [x] Suite du labo
- [ ] Tableaux multidimensionnels

## Exercice

Soit un tableau de 20x20 caractères. Écrire un programme qui dessine un 
cercle centrée dans le tableau. Le rayon du cercle est une variable.
Le cercle s'affiche avec des `*` et le reste avec des espaces.

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