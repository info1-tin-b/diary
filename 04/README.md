# Semaine 04/16

- [x] Constantes littérales
- [x] Identificateurs
- [ ] Flux d'un programme
- [ ] Exercice

## Constantes littérales

```c
12    // entier
12L   // long
12U   // unsigned int
12UL  // unsigned long
12LL  // long long
12ULL // unsigned long long 

12.0  // double
12.   // double
.12   // double
12.f // float

0x12 // hexadécimal
0b10101010 // binaire
012 // octal /!\ ATTENTION

0x12L // long hexadécimal

"toto" // chaîne de caractères
'a'    // caractère
```

## Identificateurs

- Doivent commencer par une lettre ou un underscore `_`
- Peuvent contenir des lettres, des chiffres et des underscores
- Ne peuvent pas être des mots réservés
- Sensible à la casse (`var` et `Var` sont différents)
- Interdit de commencer par un chiffre
- Interdit d'utiliser des caractères spéciaux (ex: `@`, `$`, `%`, etc.)

```c
// (bien)
int radius_of_the_circle = 10;
int circle_radius_mm = 10;

// (pas bien)
int var = 10; // Rayon du cercle en mètre.

/* ....
sur deux lignes
*/
```