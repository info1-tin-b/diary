# Semaine 11/16

- [ ] Qualité du code
  - [x] PAS DE DECLARATION EN AMONT
  - [x] Markdown rappel des règles
    - [x] Installer Markdown all in one, espace après titres...
  - [x] Rapport généré avec Chat GPT, attention les gens !
  - [x] Chapitre philosophie
- [x] Lecture sur l'entrée standard
  - [x] Lecture Y/n ?
  - [x] Pourquoi vider le buffer ?
- [x] Prototypes de fonction
  - [x] Pourquoi ?
  - [x] Comment ?

- [ ] Tableaux multidimensionnels
  - [ ] Rappels sur les tableaux
  - [ ] Spécificité du type tableau
  - [ ] Rappel de l'opérateur sizeof
  - [ ] Exercice taille (différents types)
- [ ] Tag et génération version avec Git
- [ ] Défi internet [CSES](https://cses.fi/problemset/list/)
- [ ] Enum et structs

## Weird Algorithm (CSES)

Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
$$ 3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$$
Your task is to simulate the execution of the algorithm for a given value of n.
Input
The only input line contains an integer n.
Output
Print a line that contains all values of n during the algorithm.
Constraints

1 \le n \le 10^6

Example
Input:
3

Output:
3 10 5 16 8 4 2 1

## Revue de code

### Monsieur Sieve

- Orthographe
- Déclaration en amont
- Main à la fin du fichier
- Convention naming : isdigit, mais table_code

### Monsieur Cossy

- Orthographe
- Déclaration en amont

### Monsieur Añazco Torres

- Markdown, code avec backticks
- Markdown liste avec 4. pas 4)

### Madame Luna

- Rapport minimaliste, pas de tests manuels
- TOUJOURS TESTER LA VALEUR DE RETOUR DE SCANF
- Trop de commentaires

### Monsieur Conod

- Pas de variables globales

### Multiplications

```c
void table_code(int n)
{
    printf("\n");
    int range = log10(n);

    // Print column headers
    printf("  X |");
    LOOP_PRINT(i, 1);
    printf(" %d ", n);
    printf("\n");
    …
}
```

```c
void version(void)
{
    printf(
        "Version 0.1.0 Copyright(c) HEIG-VD Sieve Alexandre "
        "<sieve.alexandr@heig-vd.ch>\n\n");
    return;
}
```

### Strfun

```c
void reverse(char str[])
{
    int length = strlen(str);
    char temp[length + 1];  // Temporary buffer to invert string
    int j = 0;

    for (int i = length - 1; i >= 0; i--) {
        temp[j++] = str[i];
    }
    temp[j] = '\0';     // Add end of str char
    strcpy(str, temp);  // Copy inverted string in str
}
```

```c
void capitalize(char str[])
{
    if (strlen(str) == 0) {
        printf("Error: Only non-empty sentences are accepted.\n");
        exit(1);
    }
    int size = strlen(str);
    str[0] = toupper(str[0]); // Pourquoi un cas particulier pour le premier caractère ?
    // Capitalizes the first letter of a word
    for (int i = 1; i < size; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ') {
            str[i] = toupper(str[i]);
        }
    }
}
```
