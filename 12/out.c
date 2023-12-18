#include <stdlib.h>
#include <stdio.h>


void help(FILE *fp) {
    fprintf(fp, "Help...\n");
}

int main() {
    // Sur la sortie standard
    help(stdout);

    // Sur la sortie d'erreur
    help(stderr);

    // Dans un fichier (info2)
    FILE *fp = fopen("toto.txt", "w");
    help(fp);
    fclose(fp);
}