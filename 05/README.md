# Semaine 05/16

- [x] Initialisation de variables
- [x] Arguments 
- [x] Conversion ASCII vers nombres
- [ ] Affichage sur la sortie standard

## Initialisation de variables

En C, il est important d'initialiser les variables avant de les utiliser. L'initialisation consiste à attribuer une valeur initiale à une variable au moment de sa déclaration.

```c
int i;
```

Dans cet exemple, la variable `i` est déclarée mais non initialisée. Son contenu est indéfini, ce qui signifie qu'elle peut contenir n'importe quelle valeur aléatoire.

Pour éviter des comportements imprévisibles, il est recommandé d'initialiser les variables lors de leur déclaration :

```c
int i = 0; // Initialisation de i à 0
```

## Arguments 

```c
int main(int argc, char *argv[]) {
    // Code
}
```

- `argc` (argument count) : un entier qui indique le nombre d'arguments passés au programme, y compris le nom du programme lui-même.
- `argv` (argument vector) : un tableau de chaînes de caractères (tableau de pointeurs vers des caractères) qui contient les arguments passés au programme. `argv[0]` est le nom du programme, `argv[1]` est le premier argument, et ainsi de suite.

## Conversion de types (chaîne vers nombres)

Les fonctions primitives issue des premieres versions du langage C permettent de convertir des chaînes de caractères en différents types numériques :

- `atoi` : convertit une chaîne de caractères en un entier (`int`).
- `atol` : convertit une chaîne de caractères en un entier long (`long`).
- `atoll` : convertit une chaîne de caractères en un entier long long (`long long`).
- `atof` : convertit une chaîne de caractères en un nombre à virgule flottante (`float`).

Mais attention, ces fonctions ne gèrent pas les erreurs de conversion. Pour une gestion plus robuste des erreurs, il est recommandé d'utiliser les fonctions `strtol`, `strtoll`, `strtof`, `strtod`, etc.

Mais en info1, on va plutot utiliser `sscanf` pour lire et convertir des valeurs depuis des chaînes de caractères.

## SSCANF

Sscanf est une fonction de la bibliothèque standard C qui permet de lire des données formatées à partir d'une chaîne de caractères. Elle est souvent utilisée pour extraire des valeurs numériques ou des chaînes de caractères à partir d'une chaîne d'entrée.

Elle utilise un motif de format similaire à celui de `printf` pour spécifier comment les données doivent être lues:

- `%d` : pour lire un entier décimal.
- `%f` : pour lire un nombre à virgule flottante.
- `%lf` : pour lire un nombre à virgule flottante double précision (`double`).
- `%s` : pour lire une chaîne de caractères (jusqu'au premier espace).
- `%5d` : pour lire un entier décimal avec une largeur maximale de 5 caractères.
- `%6.2f` : pour lire un nombre à virgule flottante avec une largeur totale de 6 caractères, dont 2 après la virgule.

**ATTENTION**: Toujours vérifier la valeur de retour de `sscanf` pour s'assurer que le nombre attendu de valeurs a été correctement lu et converti. Si le format ne correspond pas à la chaîne d'entrée, `sscanf` peut ne pas remplir toutes les variables prévues.

Pour les exemples, voir les fichier `sscanfX.c` dans ce dossier.

## Affichage sur la sortie standard

Les fonctions standards pour afficher des données sur la sortie standard (généralement la console) en C sont principalement: 

- `putchar` : pour afficher un seul caractère.
- `puts` : pour afficher une chaîne de caractères suivie d'un saut de ligne.
- `printf` : pour afficher des données formatées.
- `fprintf` : pour afficher des données formatées sur un flux spécifique (comme un fichier).
