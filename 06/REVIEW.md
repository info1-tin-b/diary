# Remarques générales sur les labos

- En-tête de programme qui décrit le programme
- Indentation
- Pas de nom, pas de date, pas de version dans le programme
- Scope des variables
- Nom de variable : cohérence, Conventions de nommage variable
- Opérateurs: `1+2+3` ou `1 + 2 + 3` ? `a = b + c`

## Revue de code

```c
double cercle_A = 2 / 2;   // cercle de r=1 cm
double cercle_B = 10 / 2;  // cercle de r=5 cm
double cercle_C = 20 / 2;  // cercle de r=10 cm
```

```c
// We use diameters in the specification, values in cm
double circle_radius_a = 2 / 2;
double circle_radius_b = 10 / 2;
double circle_radius_c = 20 / 2;
```

```c
int PtsZoneA, PtsZoneB, PtsZoneC, PtsZoneD;
int score = 0;
double DistTo0 = sqrt(pow(x, 2) + pow(y, 2));
```

```c
/*
    this program takes 2 coordinates in inputs and optionaly the points for each area.
    It then calculates the score depending of the distance from the center.

    Use argument "-v" to show informations about the program.
    Use argument "-c" to clear the contents of the result file.

    references used:
    -https://stackoverflow.com/questions/11573974/write-to-txt-file
    -https://koor.fr/C/cstdio/fopen.wp
*/
```



/*
 * This program calculates the score for a dart game based on the
 * distance from a point (X, Y) to the origin (0, 0). The scoring
 * zones are defined by their diameters, and points are awarded
 * based on which zone the dart lands in.
 *
 * Note:
 *   The program expects at least two arguments (X and Y). If fewer
 *   arguments are provided, an error message will be displayed.
 *   Invalid input for coordinates will also result in an error.
 */

Commentaire de documentation formelle doxygen
Show spaces (Render whitespace)

    double pos_x; // Position flechette en x
    double pos_y; // Position flechette en y

    int pt_A = 100; // Nb de point attribué par zone (A-D) par défaut
    int pt_B = 25;

Voir avec Gabriel Condegarea Squiggles
