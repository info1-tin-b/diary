# Seamine 15/16

- [x] À quoi sert le `size_t`
- [ ] À quoi sert le `size` dans un tableau

# Type "modernes"

```c
char            // 8-bit
short int       // 16-bit
int             // 32-bit
long int        // ...
long long int   // 64-bit
float
double
long double
```

```c
// Type d'exactement N bits (donc pas portable)
int8_t
int16_t
int32_t
int64_t

// Type d'au moins N bits
int_least8_t
int_least16_t
int_least32_t
int_least64_t

// Type d'au moins N bits, et le plus rapide pour l'architecture
int_fast8_t
int_fast16_t
int_fast32_t
int_fast64_t

for (uint_fast8_t i = 0; i < 42; i++) {...}

int data[N];
typedef unsigned long int size_t;
for (size_t i = 0; i < N; i++) {...}
```

## Size d'un tableau

```c
int tableau[128]; // Réserve 128 * 4 bytes en mémoire pour une
                  // une utilisation en lecture/écriture
int *ptr;

#define N 128

// Uniquement valide pour une taille de N
long int sum(int data[N]) {
    long int total = 0;
    for (int i = 0; i < N; i++) {
        total += data[i];
    }
    return total;
}

long int sum2(const int *data, size_t size) {
    long int total = 0;
    for (int i = 0; i < size; i++) {
        total += data[i];
    }
    return total;
}

#define ASIZE(a) (sizeof(a) / sizeof(a[0])) 
int main() {
    int data[N + 5];
    sum(data); // Interdit
    sum2(data, sizeof(data) / sizeof(data[0]))
    sum2(data, ASIZE(data));
}
```

## Sizeof et strlen

- Sizeof retourne la taille en mémoire d'une variable en bytes
- Strlen calcule la longueur d'une chaîne de caractère en s'appuyant
  sur la sentinelle de fin.

```c
char *s = "salut\0les\0poilus";
puts(s); // "salut\n"
puts(s[10]); // Error char != char *
puts(&s[10]); // "poilus\n"

size_t strlen(char *s) {
    char *w = s;
    while(*w != '\0') w++;
    return w - s;
}

// Pas bien !
for (size_t i = 0; i < strlen(s); i++) {
    ...
}

// Bien !
size_t size = strlen(s);
for (size_t i = 0; i < size; i++) {
    ...
}
```

## Réponse a une question

```c
char grid[9][9];
scanf("%hhu", &grid[i][j]);

char c = 97;
char c = 'a';
c + 2

int v = 10;
int *a = &v;
int *b = &v;
(*a) * (*b)
```

## scanf / sscanf / fscanf

```c
scanf("%d", &a) == 1 // L'entrée standard
fscanf(stdin, "%d", &a) == 1 // entrée standard
sscanf("42", "%d", &a) == 1

// Lecture depuis un fichier (Info2)
FILE *fp = fopen("toto.txt", "r");
fscanf(fp, "%d", &a);
fclose(fp);
```