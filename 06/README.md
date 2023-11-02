# Semaine 06/16

- [x] Boucles : for, while, do while
- [ ] Opérateur ++, -- 
- [ ] Exercices sur les boucles
- [ ] Questions sur les séries d'exerices
- [ ] Exercices simple. 

## Boucles ?

while

do.. while
for(<expression initiale>; <condition de maintien>; <expression intermédiaire>)

## Break/Continue

- `break`: Interrompt la boucle (donc on sort de la boucle immédiatement)
  ```c
  int i = 0;
  while(i++ < 10) {
    printf("%d\n", i);
    break;
  }
  ```
-  `continue`: Passe immédiatement à l'itération suivante
  ```c
  int i = 0;
  while(i++ < 10) {
    continue;
    printf("%d\n", i);
  }
  ```
### Boucles infinies

- `while(true) {}`
- `while(42) {}`
- `do {} while(true);`
- `for(int i = 0; true; i++) {}`
- `for( ; true ; ) {}`
- `for( ; ; ) {}`

## Exercice

Le calcul du volume d'un tronçon de sphère se calcule avec la formule:
$$ V = \frac{1}{3}\pi\cdot h\cdot 2(3\cdot R - h) $$

Écrire un programme qui prend en argument `R` et `h` et affiche le volume du tronçon de sphère correspondant avec 3 décimales. 

Vérifiez que les valeurs données sont strictement supérieures à 0 et qu'elles sont valides avec `sscanf`. 
