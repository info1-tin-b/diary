#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compute_new_elo(int a, int b, int k, double w) {
    double d = 400.;
    return a + k * (w - 1 / (1 + pow(10, (b - a) / d)));
}

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

    double w_winner = null_game ? 0.5 : 1.0;
    double w_loser = null_game ? 0.5 : 0.0;
    printf("%d\n%d\n", 
        compute_new_elo(elo_winner, elo_loser, k, w_winner), 
        compute_new_elo(elo_loser, elo_winner, k, w_loser));

    return 0; // Pas d'erreurs
}
