# Semaine 12/16

- [ ] Git
- [ ] https://git-scm.com/book/fr/v2
- [ ] https://git-scm.com/docs

## C'est quoi Git

Un système qui permet:

- Faire une tracabilité des changements sur des fichiers.
- Une sauvegarde par snapshots
- Communiquer entre des développeurs 
- Partager des fichiers
- Gestion de version décentralisée

## C'est quoi un hash

C'est une fonction mathématique qui transforme une donnée en une donnée 
généralement plus courte. Il n'existe aucune méthode ou algorithme qui permet
de retrouver la donnée d'origine. 

Un bon hash est un hash qui minimise le nombre de collisions. 

## Les commandes Git

- `git init` Crée un référentiel vide (un dossier `.git`)
- `git add <fichier/dossier>` Ajoute au référentiel le ou les fichiers
- `git status` Affiche le status du référentiel (ce qui a été modifié)
- `git commit -m "message"` Crée un nouveau commit dans le référentiel à la suite des commits existants
- `git push` Envoyer les modifications sur GitHub
- `git merge` et `git rebase` Qui permet de fusionner des modifications
  
- `git clone` Qui est une méta-commande (git init; git remote add; git pull)
- `git pull` c'est une méta commande (git fetch; git merge)

## Fonctionnement de Git


1. Fichier `foo.txt` qui contient `Les sablés au pommes`.
2. Fichier `bar.txt` qui contient `Les trains CFF sont toujours à l'heure`.
3. Je calcul le hash du contenu du fichier `foo.txt`: `c631c04`
4. Je calcul le hash du contenu du fichier `bar.txt`: `5846215`
5. Je crée un fichier que j'appelle `tree`

   ```txt
   c631c04 foo.txt
   5846215 bar.txt
   ```
6. Je calcul le hash de `tree`: `d8bb809c01e`
7. Je crée un nouveau fichier que j'appelle un `commit`

    ```txt
    commit 
    2023-12-11T14:07 Yves Chevallier <yves.chevallier@heig-vd.ch>
    J'ai ajouté deux fichiers
    d8bb809c01e
    ```
8. Je calcul le hash de ce fichier: `f6ee88dd9de7fe`

9. Si je veux un nouveau commit

    ```txt
    commit 
    2023-12-11T14:11 Yves Chevallier <yves.chevallier@heig-vd.ch>
    Je modifie foo
    56371cabe0
    parent f6ee88dd9de7fe
    ```

## Incompréhensions

- [ ] Formattage sur la sortie standard
- [ ] Fonctions dans des cas spécifiques
- [ ] Certains opérateurs, plus généralement les priorités
- [ ] Pointeurs c'est vague
- [ ] Capturer des arguments
- [ ] On manque la méthode pour des exercices p.ex.
  - [ ] Priorité des opérateurs
- [ ] Comment utiliser "ce foutu" déboggueur ?
- [ ] Compilateur, pas clair (ça va pa)
- [ ] Problème de tuyau (|)
- [ ] Switch pas clair
- [ ] Boucles algorithmes
- [ ] 
## Fiche d'unité

- Numération
    - [x] Bases (système décimal, hexadécimal, octal, binaire)
    - [x] Conversion de bases
    - [x] Complément à un
    - [x] Complément à deux
    - [!] Arithmétique binaire (et, ou, ou exclusif, négation)
  - Processus de développement
    - Outils
      - [x] Environnement intégré (IDE)
      - [!] Compilateur (*compiler*)
      - [x] Chaîne de développement (*toolchain*)
    - [x] Cycle de développement
    - [x] Cycle de compilation
    - [x] Installation d'un environnement de développement
    - [!] Programmes et processus
  - Généralités du langage C
    - [x] Séquences
    - [!] Embranchements (if, switch)
    - [x] Boucles (while, do..while, for)
    - Sauts (break, continue, return, goto)
      - [~] break
      - [!] continue
      - [x] return 
      - [x] goto
  - Types de données
    - [x] Typage
    - [x] Stockage des données en mémoire
    - [x] Entiers naturels
    - [x] Entiers relatifs
    - [x] Nombres réels (virgule flottante)
    - [x] Caractères
      - Table ASCII ('2' == 0x32, '0' == 0x30, 'a' == 97, '\n' == 0xa)
    - [x] Chaînes de caractères
    - [x] Booléens
  - Interaction utilisateur en mode console
    - [x] Entrée standard (c = getchar(), scanf())
    - [x] Sortie standard 
      - [x] puts("abc"), 
      - [x] printf("abc %d", toto), 
      - [x] putchar('d'), 
      - [x] fprintf(stdout, "toto%d", 42)
    - [x] Sortie d'erreur standard (fprintf(stderr, "foo%d", 42))
    - [x] Questions/Réponses avec `printf` et `scanf`
    - Formater un résultat sous forme tabulée et lisible
    - Menu (choix multiples)
  - Opérateurs
    - Opérateurs du langage C
    - Priorité des opérateurs
    - Expressions
    - Promotion et promotion implicite
  - Conception
    - Choix des structures de contrôles adaptées à des problèmes
    - Algorithmes simple (min, max, moyenne, ...)
      - Manipulation de chaînes
      - Manipulation de tableaux
      - Manipulation de bits
  - Algorithmie
    - Complexité d'un algorithme
    - Exemples d'algorithmes
    - Algorithmes de tri (tri à bulle)
  - Fonctions
    - Passage par valeur et par adresse
    - Utilisation de la valeur de retour
    - Prototypes de fonctions
  - Types de données composées
    - Structures
    - Unions
    - Tableaux
    - Énumérations
  - Bibliothèques standard
    - <math.h>
      - Fonctions trigonométriques
      - Exponentielle
      - Logarithme
    - <string.h>
      - Comparaison de chaînes de caractères
      - Concaténation de chaînes de caractères
      - Copie de chaînes de caractères
      - Longueur d'une chaîne de caractères
      - Recherche d'une sous-chaîne dans une chaîne de caractères
    - <stdio.h>
      - printf
      - scanf
      - putchar
      - getchar
      - puts
      - gets
  - Structure du code
    - Corriger les erreurs de syntaxes
    - Corriger les erreurs sémantiques
    - Indentation du code
    - Commentaires