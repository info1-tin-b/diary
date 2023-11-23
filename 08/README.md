# Semaine 08/16

  - [x] Idioms
  - [x] Code Review: Grodent
  - [ ] Utilisation des boucles
  - [ ] Exercice... 

## Idioms

- DRY Don't Repeat Yourself 
  - Evitez les copier/coller
- SSOT Single Source of Truth
  - De ne pas dupliquer de l'information
- KISS Keep it Simple Stupid
  - Garder les fonctions courtes (<10 lignes)
  - Avoir des fichiers courts (<500 lignes)
- YAGNI You Ain't Gonna Need It

```c
#define ERROR_BAD_ARGUMENT 2

int main(int argc, char * argv[]) {
    int a;
    if (argc > 1 && sscanf(argv[1], "%d", &a) != 1) {
        return ERROR_BAD_ARGUMENT;
    }
    if (argc > 2 && sscanf(argv[2], "%d", &a) != 1) {
        return ERROR_BAD_ARGUMENT;
    }    
}

int main() {
    int a = 42;
    int b = 23;
    float capitain_age = 23;

}

## Volatile

```c
volatile int u;
int main() {
    u = 1;
    if (u == 1) {}
    u = 0;
    u = 1;
    u = 0;
} 