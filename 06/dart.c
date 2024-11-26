/**
 * Ce programme calcule un score pour un jeu de flechettes
 * IL prend en paramètre les coordonnées x,y et optionnellement
 * le nombre de points pour chaque zone de jeu.
 *
 * Se référer au README pour les détails.
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
List of errors:
1: Missing coordinates!
2: The passed value is not valid!
*/

// Intermediate program that calculates the dart score
// Votre fonction n'est pas KISS, elle utilise le nombre d'arguments pour définir les points ce qui n'est pas très
// logique.
int score_calculation(double Pos_arrow, int NumberPointsZone_A, int NumberPointsZone_B, int NumberPointsZone_C, int NumberPointsZone_D, int argc)
{
    // toto
    // Data hardcoded
    // SSOT
    if (Pos_arrow <= 1.)
    { // Zone A (Radius of 1)
        if (argc >= 4)
        {
            // Points for zone A were specified
            return (NumberPointsZone_A);
        }
        else
        {
            return (100);
        }
    }
    else if (Pos_arrow <= 5.)
    { // Zone B (Radius of 5)
        if (argc >= 5)
        {
            return (NumberPointsZone_B); // Points for zone B were specified
        }
        else
        {
            return (25);
        }
    }
    else if (Pos_arrow <= 10.)
    { // Zone C (Radius of 10)
        if (argc >= 6)
        {
            return (NumberPointsZone_C); // Points for zone C were specified
        }
        else
        {
            return (5);
        }
    }
    else
    { // Zone D
        if (argc >= 7)
        {
            return (NumberPointsZone_D); // Points for zone D were specified
        }
        else
        {
            return (0);
        }
    }
}

int main(int argc, char *argv[])
{
    // Check that the arrow coordinates are provided
    if (argc < 3)
    {
        printf("Erreur: Manque des coordonnées !\n");
        return (1);
    }
    // Retrieve the arguments and ensure the values are correct
    // Scope
    double Pos_X = 0;
    double Pos_Y = 0;
    if ((sscanf(argv[1], "%lf", &Pos_X) != 1) ||
        (sscanf(argv[2], "%lf", &Pos_Y) != 1))
    {
        printf("La position n'est pas valide\n");
        return (2);
    }

    // Points par zone (A..D)
    int NumberPointsZone_A = 0;
    int NumberPointsZone_B = 0;
    int NumberPointsZone_C = 0;
    int NumberPointsZone_D = 0;
    if (((argc >= 4) && (sscanf(argv[3], "%d", &NumberPointsZone_A) != 1)) ||
        ((argc >= 5) && (sscanf(argv[4], "%d", &NumberPointsZone_B) != 1)) ||
        ((argc >= 6) && (sscanf(argv[5], "%d", &NumberPointsZone_C) != 1)) ||
        ((argc >= 7) && (sscanf(argv[6], "%d", &NumberPointsZone_D) != 1)))
    {
        printf("Un des argument optionnel n'est pas correct\n");
        return (3);
    }

    // Calculation of the dart's position
    double Pos_arrow = sqrt(pow(Pos_X, 2) + pow(Pos_Y, 2));

    // Display the score
    printf("%d\n", score_calculation(Pos_arrow, NumberPointsZone_A, NumberPointsZone_B, NumberPointsZone_C, NumberPointsZone_D, argc));

    return 0;
}
