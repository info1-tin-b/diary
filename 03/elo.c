#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc < 2) {
        printf("Erreur: il manque le k\n");
        return 1; // Erreur
    }
    int k = atoi(argv[1]);
    if (k <= 0) {
        printf("Erreur: mauvaise valeur de k\n");
        return 2;
    }
    printf("Est-ce que le match est nul (1=nul, 0 sinon) ?");
    int null_game;
    scanf("%d", &null_game);

    if (null_game != 0 && null_game != 1) {
        printf("Erreur, indiquer 0 ou 1\n");
        return 3;
    }

    printf("Elo du gagnant: ");
    int elo_winner;
    scanf("%d", &elo_winner);

    printf("Elo du perdant: ");
    int elo_loser;
    scanf("%d", &elo_loser);

    // Test
    printf("ELO gagnant %d, ELO perdant %d, K %d, Match nul %d",
        elo_winner, elo_loser, k, null_game);


    // elo_winner
    // elo_loser
    // null_game
    // k












    return 0; // Pas d'erreurs
}
