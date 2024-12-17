
void marchand(int *a) {
    (*a)++;
}

int berthoud(int a, int b, int *c) {
    marchand(&a);
    *c = a + b;
    return a;
}

int lambiel(int *u) {
    return berthoud(23, 42, u);
}

int main(int argc, char *argv[]) {
    int a = 23;
    printf("%d %d", 
        lambiel(&a), 
        a);
}