#include <stdio.h>
#define CLEAR_BUFFER while ( getchar() != '\n' )
int main() {
    int low = 0;
    int high = 100;
    
    printf("Peux-tu penser à un nombre entre 0 et %d\n", high);
    while (low != high) {
        int mid = (high - low) / 2 + low;
        printf("[%d, %d, %d]\n", low, mid, high );
        printf("Est-ce que ton nombre est plus petit que %d (1=oui, 0=non) ? \n", mid);

        int answer;
        if (scanf("%d", &answer) != 1) {
            printf("Tu n'as pas répondu !\n");
            CLEAR_BUFFER;
            continue;
        }
        
        if (answer == 1) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    printf("J'ai deviné ton nombre, c'est %d n'est-ce pas ?\n", low);
}
