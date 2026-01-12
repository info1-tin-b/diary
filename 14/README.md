# Semaine 14/16

## Programme exemple 

```c
int main(int argc, char *argv[]) { // Arguments
    int a;
    while(!feof(stdin)) { 
        if (scanf("%d", &a) != 1) {
            fprintf(stderr, "Erreur, valeur invalide\n");
            continue;
        }
        printf("(%d)", a);
    }
    return 0; // Le status de sortie
}
```
## Correction TE02

### Problème 1: Expressions

En C, une expression est une combinaison de valeurs, de variables, d’opérateurs et/ou d’appels de fonctions qui peut être évaluée pour produire une valeur (et éventuellement des effets de bord).

```c
42; 
34 + 2; 
1. / sin(42.);
a > b ? a : b;
```

```c
double u, v, w; // Stockés sur 64-bit ou 8 bytes
int i, j, k;    // Généralement sur 32-bits signés (complément à deux) 

// i. Retourne la valeur de \frac{i\cdot\left(i+1\right)}{j\cdot k}
(double)i * (i + 1.) / (double)(j * k)

// ii. Calculer l'hypothénuse conaissant l'angle `u` et le côté opposé `j` d'un triangle rectangle
j / sin(u * M_PI / 180.0) // si l'angle est donné en degrés
j / sin(u)

// iii. (Décale `j` de `i` bits à droite) et inverse l'état du bit à la position `k` (la position 0 est le LSB)

j >> i // 0b00000000000000000000000000000000
                                      543210 

5 -->  // 0b00000000000000000000000000100000
1 << k

(j >> i) ^ (1 << k)

// iv. Vaut `u` si `k` est un multiple de `j` sinon vaut `v. Ne pas utiliser l'instruction `if`

k % j == 0 ? u : v
k % j ? v : u

// v. Vaut `true`si `i`, `j` et `k` sont tous différents de zéro ou que `w` est plus petit que `10`

i && j && k || w < 10
(i && j && k) || (w < 10)
```

(b) Fonctions

```c
// i.
// 1 + 2 + 3 == 6
// 1 + 2 + 3 + 4 = 10
// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 == 45
// N * (N+1) / 2  Méthode d'Euler
long unsigned int series(int n) {
    return n * (n + 1) / 2lu;
}

// ii. Le nombre de fois que la fonction a été appelée: NOTE Rappelez-vous du mot clé `static`
// called()  // 1
// called()  // 2
// called()  // 3
// typedef unsigned long int size_t;
size_t called() {
    static size_t count = 0; // Déclarer au premier passage et uniquement visible dans la fonction
    return ++count;
}

// iii. Retourne la somme de toutes les valeurs négatives dans le tableau reçu en paramètres.
int nsum(const char array[], size_t size) {
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        if (array[i] < 0) sum += array[i];
    return sum;
}

// iv. Modifie le nombre reçu en paramètre de telle manière qu'il est masqué avec la valeur `0x55aaa5a5` 
void mask(int *num) {
    *num &= 0x55aaa5a5;
}

// v. Échange deux valeurs entière signées 32-bits passées en paramètres.
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
```

### Problème 2: 

a. 12
b. 30
c. 20
d. 19
e. 19
f. 11
g. 17
h. 13
i. 4
j. 50

### Problème 3:

a. Affiche `hello` 0 fois 
b. Rien n'est affiché
c. `after loop`
d. 60
e. Itère 3 fois

### Problème 4:

#### Moyenne 

```c
double mean(const double array[], size_t size) {
    double sum = 0.;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}
```

#### Maximum 

```c
double max(const double array[], size_t size) {
    double max_value = array[0];
    for (size_t i = 1; i < size; i++) {
        if (array[i] > max_value) max_value = array[i]; 
    }
    return max_value;
}
```

#### Ouverture Fermeture

```c
void open_close(double array[], size_t size, double *open, double *close) {
    *open = array[0];
    *close = array[size - 1];
}
```

#### Lecture de l'entrée standard

```c
bool read(double array[], size_t size) {
    for (size_t i = 0; i < size; i++) 
        if (scanf("%lf", &array[i]) != 1) 
            return true;
    return false;
}
```

#### Main

```c
#define SIZE 24

int main() {
    double array[SIZE];
    while(!read(array, SIZE)) {
        double open, close;
        open_close(array, SIZE, &open, &close);
        printf("%s, %.2f, %.2f, %.2f, %.2f\n", 
            open > close ? "red" : "green",
            open, close,
            max(array, SIZE),
            mean(array, SIZE)
        )
    }
}
```