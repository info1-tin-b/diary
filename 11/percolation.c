#include <stdio.h>

#define N 7

typedef enum { W, S, X } Terrain;


int main(int argc, char *argv[]) {
    Terrain m[N][N] = {
        {X, X, S, X, X, X, X},
        {X, S, S, S, S, S, X},
        {X, S, X, X, X, S, X},
        {X, S, S, S, S, S, X},
        {X, X, X, S, X, X, S},
        {X, S, X, S, X, X, S},
        {S, S, S, S, S, S, S},
    };

    // Propagate W in first line
    for(int i = 0; i < N; ++i) 
        if (m[0][i] == S) 
            m[0][i] = W;

    // Rest of the algorithm 
    for (int v = 1; v < N; v++) {
        for(int h = 0; h < N; ++h) 
            if (m[v-1][h] == W && m[v][h] == S) 
                m[v][h] = W;
        for(int h = 0; h < N - 1; ++h) 
            if (m[v][h] == W && m[v][h+1] != X) 
                m[v][h+1] = W;
        for(int h = N-1; h >= 0; --h) 
            if (m[v][h] == W && m[v][h-1] != X) 
                m[v][h-1] = W;
    }

    // Display Matrix 
    for (int v = 0; v < N; v++) {
        for (int h = 0; h < N; h++) 
            switch(m[v][h]) {
                case W: printf("."); break;
                case S: printf("-"); break;
                case X: printf("X"); break;
            }
        printf("\n");
    }
}