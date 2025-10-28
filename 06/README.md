# Semaine 06/16

- [ ] Structure de contrôle : boucles
  - [ ] `while` (jusqu'à ce que)
  - [ ] `do while` (faire une fois, puis jusqu'à ce que)
  - [ ] `for` (pour un nombre fixe de fois)
  - [ ] `goto` (saute à une autre partie du code (PAS BIEN))
- [ ] Très brève introduction au [Boutisme](https://heig-tin-info.github.io/handbook/course-c/15-fundations/datatype/?h=boutisme#boutisme)
- [ ] Encore plus brève introduction à [Markdown](https://fr.wikipedia.org/wiki/Markdown)
- [ ] Styles d'indentation (allman, k&r, etc.)
  - [ ] Clang-format (https://zed0.co.uk/clang-format-configurator/) 
  
## Histoire

```basic
05 REM Devine un nombre
10 PRINT "Entrez un nombre entre 1 et 10 : "
20 INPUT A
30 IF A = 7 THEN PRINT "Bravo ! Vous avez deviné le nombre." : END
40 PRINT "Désolé, ce n'est pas le bon nombre."
50 GOTO 10
```

```c
// Même programme en C
#include <stdio.h>

int main() {
    int A;
    while (1) {
        printf("Entrez un nombre entre 1 et 10 : ");
        if (scanf("%d", &A) != 1) {
            printf("Entrée invalide. Veuillez entrer un nombre.\n");
            while (getchar() != '\n'); // vider le buffer
            continue;
        }
        if (A == 7) {
            printf("Bravo ! Vous avez deviné le nombre.\n");
            break;
        } else {
            printf("Désolé, ce n'est pas le bon nombre.\n");
        }
    }
    return 0;
}
```

## Goto

On n'utilise généralement pas `goto` en C, mais voici un exemple pour illustrer son usage :

```c
// Cache cache (compte jusqu'à 10)
#include <stdio.h>

int main() {
    int count = 1;
    goto start;
fin:
    goto quitter;
start:
    printf("%d\n", count);
    if (count >= 10) goto fin;
    count = count + 1;
    goto start;
quitter:
}
```

Pourquoi on l'utilise pas ? Parce que ça rend le code difficile à lire et à maintenir et qu'il y a souvent de meilleures alternatives comme les boucles `for`, `while` et les fonctions.

## While (tant que)

On utilise `while` pour répéter un bloc de code tant qu'une condition est vraie. Elle est généralement utilisée si le nombre d'itérations **n'est pas** connu à l'avance.

```c
#include <stdio.h>

int main(int argc, char* argv[]) {
    int count = 1;
    if (argc < 2) {
        printf("Usage: %s <max_count>\n", argv[0]);
        return 1;
    }
    int max_count = atoi(argv[1]); // Convertit l'argument en entier
    while (count <= max_count) {
        printf("%d\n", count);
        count = count + 1;
    }
}
```

## Do while

On utilise `do while` pour exécuter un bloc de code au moins une fois, puis répéter tant qu'une condition est vraie. On utilise cette boucle si on ne sait pas à l'avance combien de fois on devra répéter le bloc, mais on veut s'assurer qu'il s'exécute au moins une fois.

```c
int cont;
do {
    printf("Dites 42");
    int input;
    if (scanf("%d", &input) == 1 && input == 42) {
        printf("Bravo ! Vous avez dit 42.\n");
    } else {
        printf("Ce n'est pas 42, essayez encore.\n");
    }
    printf("Voulez-vous continuer ? (1 pour oui, 0 pour non) : ");
    scanf("%d", &cont);
} while (cont != 0);
```

## For

On utilise `for` pour répéter un bloc de code un nombre précis de fois. C'est utile quand on sait à l'avance combien d'itérations on veut faire.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}