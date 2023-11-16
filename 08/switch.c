#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char * argv[]) {
    if (argc < 2) return 1;
    int value = atoi(argv[1]);
#if 0
    if (value == 1) { printf("One\n"); }
    else if (value == 2) { printf("Two\n"); }
    else if (value == 3) { printf("Three\n"); }
    else if (value == 10) printf("Ten\n"); 
    else printf("WTF!\n");
#else 
    switch(value) {
        case 1: // N'accepte que des constantes !
            printf("One\n"); 
            break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 10: 
        { // Nécessaire si vous avez besoin de variables locales.
            int i = 42; 
            printf("Ten\n"); break;
        }
        default: printf("WTF!\n"); 
    }
#endif 
}