# Semaine 09/16

- [x] Parcours des arguments (ordre multiple)
- [x] N'oubliez pas vos en-tête de programme (voir exemple)
- [x] Ajouter si-nécessaire des commentaires de fonction
- [x] Jamais de else-if après un return
- [x] Opérateur ternaire
- [x] Générateur congruentiel
- [x] Exercice "Cycle de développement"
  - Voir les photos sur Teams

## Opérateur ternaire

L'opérateur ternaire est une forme condensée de l'instruction if-else.

```c
// Max value of a and b
int a, b;
int c;
if (a > b) {
    c = a;
} else {
    c = b;
}
```

```c
int c = a > b ? a : b;
```

L'opérateur ternaire `?:` est composé de trois opérandes: 

1. une condition, 
2. une expression si la condition est vraie, et 
3. une expression si la condition est fausse.

```c
condition ? sivrai : sifaux
```

Règles d'utilisation: 

1. Utiliser uniquement si vous affectez une valeur à une variable.
2. Évitez d'imbriquer les opérateurs ternaires.
3. Utilisez de préférence des parenthèses pour clarifier l'ordre d'évaluation.
4. Évitez d'utiliser l'opérateur ternaire pour des conditions complexes.
5. Ne pas utiliser l'opérateur ternaire si il n'y a pas d'affectation à la clé.

Mauvais exemples: 

```c
a > b ? printf("Oui") : printf("Non");
```

Bon exemple:
```c
printf("%s", a > b ? "Oui" : "Non");
```

Minmax, mauvais exemple (imbrication)

```c
int min = a < b ? a : b < c ? b : c;
// a < b
// a
// b < c ? b : c
//    b < c
//    b 
//    c 
```

Meilleur avec des parenthèses

```c
int min = ((a < b) ? a : ((b < c) ? b : c));
```

Mais quand même meilleur avec une fonction: 

```c
/**
 * Return value 
 */
int in_range(int value, int min, int max) {
    return (value < min) ? min : ((value > max) ? max : value);
}
```
## Code Review

### Jamais de else après un return

Mauvais exemple: 

```c
if (condition) {
    return 0;
} else if(condition2) {
    return 1;
} else {
    return 2;
}
```

Bon exemple: 

```c
if (condition) {
    return 0;
} 

if (condition2) {
    return 1;
} 

return 2;
```

### Warning ou erreur

Pour préserver la compatibilité ascendante, il est préférable de ne 
pas quitter le programme si trop d'arguments sont passés au programme.

```c
if (argc > 3) {
    fprintf(stderr,"Erreur: Trop d'arguments!\n");
    exit(3);
}
```

Solution: Ne pas quitter le programme mais informer l'utilisateur qu'il 
y a trop d'arguments: 

```c
if (argc > 3) {
    fprintf(stderr,"Warning: Trop d'arguments!\n");
}
```

### Position de l'argument

Il est préférable d'être libre dans le positionnement des arguments 
passés à un programme. L'aide ou la version pourraient apparaître à n'importe
quelle position.

```c
if (argc == 2) {
    if (strcmp("--help", argv[1]) == 0) {
        printf("\nUsage : tire [OPTION_1] [OPTION_2]");
        printf(
            "\nBienvenue dans l'aide, tapez un code de pneu sous forme "
            "Pxxx/xxRxx, par exemple P225/55R15, puis tapez une "
            "distance exprimée en km");
        printf(
            "\nTapez \"--version\" pour connaître la version et le "
            "créateur\n\n");
        return 0;
    } else if (strcmp("--version", argv[1]) == 0) {
        printf(
            "\nVersion : 1.0.0\nAuteur : Cristopher Anazco\nAdresse "
            "e-mail: cristopher.anazcotorres@heig-vd.ch\n\n");
        return 0;
    }
}
```

### Séparer les responsabilités

```c
printf("┌───────────────┬"); REPEAT("─", max_width + 8); printf("┐\n");
printf("│ Diameter\t│ %*.2f cm │\n", max_width + 3, wheel_diameter_cm);
printf("│ Perimeter\t│ %*.2f m  │\n", max_width + 3, wheel_perimeter_m);
printf("│ Revs/km\t│ %*.1f     │\n", max_width + 2, revs_per_km);

if (argc == 3) {
    printf("├───────────────┼"); REPEAT("─", max_width + 8); printf("┤\n");
    printf("│ Revolutions\t│ %*.2f    │\n", max_width + 3, nb_of_revs);
}
```

```c
if (nb_of_revs > 0) {
    printf("├───────────────┼"); REPEAT("─", max_width + 8); printf("┤\n");
    printf("│ Revolutions\t│ %*.2f    │\n", max_width + 3, nb_of_revs);
}
```