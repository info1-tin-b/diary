#include <math.h>
#include <stdio.h>

int compute_new_elo(int a, int b, int k, double w) {
    double d = 400.;
    return a + k * (w - 1 / (1 + pow(10, (b - a) / d)));
}

int main() {
    int elo_winner = 500;
    int elo_loser = 2800;
    int null_game = 0;
    int k = 32;

    double w_winner = null_game ? 0.5 : 1.0;
    double w_loser = null_game ? 0.5 : 0.0;
    printf("%d\n%d\n", 
        compute_new_elo(elo_winner, elo_loser, k, w_winner), 
        compute_new_elo(elo_loser, elo_winner, k, w_loser));
}