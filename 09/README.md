# Semaine 09/10

- [x] Fin Labo-06
- [x] Instruction ternaire
- [x] Fonctions, en détail
- [ ] Chaînes de caractères
- [ ] Début Labo-07

# Fonctions

```c
<type de retour> <nom de fonction> ( <type> <nom>, ... ) {
    <implémentation>
}
```

```c

void foo(void) { printf("Rien\n"); }

double addition(double a, double b) {

}

int jimmy(int a, int b) { return a + b; }

int alexis() {
    int i = 42;
    int j = 23;
    printf("%d\n", jimmy(i, j));
    int k = jimmy(1,2);
}

int main(int argc, char *argv[]) {
    alexis();
} 
```


## Chaînes de caractères

```c
dummy_printf("abab\0");
```