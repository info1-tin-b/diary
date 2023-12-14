
// Utilisation tolérée de Goto
int process(int a, int b) {

    if (a < 0) {
        goto error;
    }
    if (b < 0) {
        goto error;
    }    
    if (a >= 42) {
        goto error;
    }

    return 0;
    error:
    printf("Erreur\n");
    return 1;    
}

int main() {
    int i = 0;
    // Do While
    debut:
    i++;
    if (i < 10) goto debut;
    printf("%d\n", i);

    // While
    a:
    if (!(i > 10)) goto fin;
    i++;
    goto a;
    fin:
}

