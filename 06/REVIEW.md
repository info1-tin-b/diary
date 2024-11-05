En-tête de programme
Indentation
Nom date en-tête
Scope des variables
Nom de variable : cohérence, Conventions de nommage variable
Opérateurs : cohérence
SSOT


    double cercle_A = 2 / 2;   // cercle de r=1 cm
    double cercle_B = 10 / 2;  // cercle de r=5 cm
    double cercle_C = 20 / 2;  // cercle de r=10 cm

    if (sscanf(argv[1], "%lg", &x) !=1)     // if x or y aren't valid (not numbers)
    {
        fprintf(stderr, "Enter only numbers");
        return 2;
    }

    int PtsZoneA, PtsZoneB, PtsZoneC, PtsZoneD;
    int Launch_score = 0;
    double DistTo0 = sqrt(pow(x, 2) + pow(y, 2));

    if (sscanf(argv[1], "%lg", &x) !=1)     // if x or y aren't valid (not numbers)
    {
        fprintf(stderr, "Enter only numbers");
        return 2;
    }
    if (sscanf(argv[2], "%lg", &y) !=1)
    {
        fprintf(stderr, "Enter only numbers");  // print error
        return 2;
    }


/*
    Dart

    08.10.2024 John Doe, john.doe@heig-vd.ch

    V1.0.0

    this program takes 2 coordinates in inputs and optionaly the points for each area.
    It then calculates the score depending of the distance from the center.
    Use argument "-v" to show informations about the program.
    Use argument "-c" to clear the contents of the result file.

    references used:
    -https://stackoverflow.com/questions/11573974/write-to-txt-file
    -https://koor.fr/C/cstdio/fopen.wp
*/

    int points_A = 100, points_B = 25, points_C = 5, points_D = 0; //points for each area

    double dart_distance = sqrt(((x*x) + (y*y))); //distance between the center and the dart


/*
 * File: dart.c
 * Author: Subramaniyam Gaja
 * Date: 10.10.2024
 * Description:
 *   This program calculates the score for a dart game based on the
 *   distance from a point (X, Y) to the origin (0, 0). The scoring
 *   zones are defined by their diameters, and points are awarded
 *   based on which zone the dart lands in.
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
