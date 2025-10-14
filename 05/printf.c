#include <stdio.h>

int main() {
    double pi = 3.1415926535;

    // Afficher un pour cent
    printf("J'aime le C à '100%%'\n");

    // Afficher naïvement un float
    printf("pi vaut : '%f'\n", pi);

    // Afficher un float optimisé 
    printf("pi vaut : '%g'\n", pi);    

    // Afficher un float avec 3 décimales
    printf("pi vaut : '%.3f'\n", pi);    

    // Afficher un float avec 3 décimales dans 
    // un espace de 8 caractères
    printf("pi vaut : '%8.3f'\n", pi);    

    // Afficher un float avec 3 décimales dans 
    // un espace de 8 caractères, aligné à gauche
    printf("pi vaut : '%-8.3f'\n", pi);     

    // Afficher un float avec 3 décimales dans 
    // un espace de 8 caractères, en utilisant le 0
    // comme remplissage
    printf("pi vaut : '%08.3f'\n", pi);     

    // Afficher un float avec 3 décimales dans 
    // un espace de 8 caractères et affiche le signe
    printf("pi vaut : '%+8.3f'\n", pi);    

    printf("pi vaut : '%+*.*f'\n", 16, 5, pi);  
    
    // Les deux lignes sont équivalentes
    fprintf(stdout, "prout"); 
    printf("prout");

    // Affiche sur la sortie d'erreur
    int error = 42;
    fprintf(stderr, "Erreur %d\n", error);
    return error;
}
