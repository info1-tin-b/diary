# Semaine 05/16

- [x] Règle de codage
- [x] `const`
- [x] Constantes littérales
- [ ] Opérateurs

## Installer Baygon sous Ubuntu 24.04

```bash
sudo apt install pipx
pipx install baygon
echo 'export PATH=$HOME/.local/bin:$PATH' >> ~/.bashrc
```

## Variable

C'est quoi une variable ? 

1. Un espace mémoire 
2. Une taille donnée
3. Une valeur
4. Un identificateur associé
5. Un type

## Identificateurs

Un identificateur est une séquence de caractères qui représente un nom de variable, de fonction, de classe, de module ou d'autres objets.

```c
// int c'est un mot clé
// INT c'est un identificateur
int INT = 42;
```

Règles d'identification d'un identificateur: 

1. Ne peut pas commencer par un chiffre
2. Ne peut pas contenir de caractères spéciaux (plus vraiment vrai)
3. Ne peut pas être un mot clé du langage
4. Ne peut pas contenir d'espace
5. Ne devrait pas terminer par `_t` (réservé pour les types POSIX)
6. Ne devrait pas commencer par un double underscore `__` (réservé pour le système)

## Constantes littérales

```c
3 // Entier (int)
3u // Entier non signé (unsigned int)
3l // Entier long (long)
3ul // Entier long non signé (unsigned long)
3ull // Entier long long non signé (unsigned long long)
0101 // Entier octal (int)
0b101 // Entier binaire (int)
3.14 // Flottant (double)
3.14f // Flottant (float)
0x41 // Entier hexadécimal (int)
"toto" // Chaîne de caractère
't' // Caractère
'\n' // Caractère d'échappement: ici nouvelle ligne (newline)
'\b' // Caractère d'échappement: ici retour en arrière (backspace)
'\t' // Caractère d'échappement: ici tabulation (tab)
'\141' // Caractère ASCII: ici 'a'
'\x61' // Caractère ASCII: ici 'a'
"toto" // Chaîne de caractère, donc les caractères, t, o, t, o et \0
"\\"
"Hello World" 
```

Truc à retenir. Les guillemets simples `'` représentent un caractère, les guillemets doubles `"` représentent une chaîne de caractères. Une chaîne de caractères se termine toujours par le caractère nul `\0`.

## Opérateurs

```c
+-/*% // Opérateurs arithmétiques

// Opérateurs bit à bits
^ // XOR
~ // NOT (Complément à 1)
& // AND
| // OR
<< // Décalage à gauche
>> // Décalage à droite

// Opérateurs logiques (chacun des opérandes est un booléen)
|| // OR logique
&& // AND logique
!  // NOT logique
```

```c
bool a = 42 && 56;
bool a = true && true;
```

```c
int i = 42;
i += 2; // i = i + 2;
assert (i == 44);
i++; // i = i + 1;
assert (i == 45);
```

## Const 

Le mot-clé `const` permet de déclarer une variable qui ne peut pas être modifiée.

```c
const int pi = 3.14159;
```

## Règles de codage

### Scope

Réduire la visibilité des variables autant que possible. 
Donc ne pas déclarer les variables en haut de la fonction mais au plus près de leur utilisation.

### Indentation

Soyez cohérents dans l'indentation de votre code.
Utilisez si possible les outils de formatage automatique de votre IDE.

### YAGNI (You Ain't Gonna Need It)

Ne pas écrire de code qui n'est pas nécessaire pour faire passer les tests.
Des fonctionnalités qui ne sont pas dans le cahier des charges ne doivent pas être implémentées.

### KISS (Keep It Simple, Stupid)

Cette fonction fait deux choses : elle calcule les solutions et les affiche.
Il est préférable de séparer ces deux responsabilités.

```c
void compute_solution(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
}
```

### DRY (Don't Repeat Yourself)

Evitez autant que possible de vous répéter, c'est-à-dire de copier-coller du code.

### SSOT (Single Source Of Truth)

Il ne doit y avoir qu'une seule source de vérité dans votre code.
