# Semaine 13/16

- [x] Correction labo test ([Ballistique](ballistic.c))
- [x] Discussion méthodologie de travail
- [x] Code Review
- [ ] Exercices sur les fonctions et les tableaux
- [ ] Labo

## Fonctions

En programmation impérative et procédurale, une fonction est un bloc de code réutilisable qui effectue une tâche spécifique. Elle permet de structurer le programme en sous-parties, facilitant la lecture, la maintenance et la réutilisation du code.

```c
int add(int a, int b) {
    return a + b;
}

void add2(int a, int b, int *result) {
    *result = a + b;
}

int main() {
    int a = 3;
    int b = 4; 
    int sum1 = add(b, a);

    int sum2;
    add2(a, b, &sum2);
}
```

## Exercice

Soit deux agents secrets James Bond et Yoko Suno qui veulent communiquer 
de manière sécurisée. Ils n'utilisent pas le chiffrement de César car 
il est un trop simple, ils préfère utiliser le chiffrement de Vigenère.

## Promotion des entiers

```c 
char u = 42;
int v = u + 1; // u est promu en int avant l'addition
```

- Tous les types entiers plus petits que `int` (char, short) sont promus en `int` lors d'opérations arithmétiques.

## Retours des étudiants

Les remarques des étudiants ont été réécrites de façon concise, et à la première personne :

- Je ne comprends pas clairement l'énoncé.
- Je trouve les phrases sont trop longues.
- Je doute d'avoir bien compris la consigne.
- Je perds trop de temps à comprendre quoi faire.
- Je trouve le rythme de travail trop rapide.
- Je gère mal mon temps.
- J'oublie rapidement la matière.
- Je n'arrive pas à réutiliser ce que j'ai appris.
- J'ai des lacunes théoriques.
- Je ne sais pas quand utiliser des fonctions.
- Je ne comprends pas bien les types de données.
- Je ne suis pas à l'aise avec les maths.
- Je ne sais pas comment structurer les données.
- J'ai des erreurs de compilation.
- J'ai des segmentation faults.
- Je n'ai pas lu le barème.
- J'ai peur de faire une erreur qui se propage.
- Je doute constamment de mes réponses.
- Le stress me bloque.
- Je dépends trop de ChatGPT.
- Je ne connais pas les flags de compilation.


## Analyse des difficultés exprimées

Les remarques des étudiants se regroupent en 6 grandes catégories.

### Compréhension de l'énoncé

- Difficulté à décoder des phrases longues
- Temps excessif passé à comprendre *quoi faire*
- Manque de confiance sur la compréhension correcte

Il s'agit d'un problème de **lecture active**, pas seulement de niveau technique.

### Charge cognitive et gestion du temps

- Trop d'informations à traiter en peu de temps
- Stress qui empêche de structurer la réflexion
- Impression que tout se mélange dans la tête

Une surcharge mentale entraîne une perte d'efficacité.

### Mémoire et consolidation

- Oubli rapide des notions vues en cours
- Difficulté à réactiver les connaissances pendant le labo

Apprentissage pas encore suffisamment automatisé.

### Lacunes techniques et théoriques

- Fonctions : quand et comment les utiliser
- Types (ex : matrice en `int`) perçus comme pièges
- Calculs et logique algorithmique fragiles

Les bases non encore maîtrisées, provoquent un effet domino.

### Mise en œuvre et débogage

- Problèmes de compilation
- Segmentation fault difficile à diagnostiquer
- Difficulté à remplir une grille / structurer les données

Manque de méthode de programmation pas-à-pas.

### Facteurs émotionnels

- Doutes constants ("est-ce juste ?")
- Stress paralysant
- Dépendance excessive aux outils (p. ex : ChatGPT)

Confiance fragile et peur de l'erreur, besoin impérieux de confirmation.

## Points d'amélioration (approche pédagogique)

### Travailler la compréhension de l'énoncé

L'objectif est de savoir quoi faire avant de coder.

- Lire l'énoncé sans toucher au clavier
- Reformuler la consigne avec ses propres mots
- Identifier :
  - entrées,
  - sorties,
  - contraintes.
- Se poser les questions "Pourquoi" et "Comment" sur chaque étape

### Réduire la charge cognitive

L'objectif est de ne pas tout gérer en même temps.

- Découper le problème en sous-tâches simples
- Écrire un pseudo-code très basique
- Implémenter une étape à la fois

### Consolider les bases

L'objectif est d'éviter l'effet boule de neige, en renforçant les acquis.

- Revoir régulièrement la théorie clé (types, fonctions, boucles)
- Faire de petits exercices fréquents
- Automatiser les réflexes simples

### Développer une méthode de débogage

L'objectif est de ne plus paniquer face aux erreurs. Le bug n'est pas un échec, c'est une information.

- Compiler souvent
- Tester avec de petites données
- Utiliser des affichages intermédiaires
- Localiser l'erreur avant de la corriger

### Améliorer la gestion du temps

L'objectif est d'éviter le stress.

- Fixer des limites de temps par étape
- Accepter de ne pas tout finir
- Prioriser les parties les plus rentables (selon le barème)

### Développer la confiance

L'objectif est de passer de "est-ce juste ?" à "pourquoi c'est juste".

- Justifier chaque choix
- Expliquer son code à quelqu'un (ou à soi-même)
- Utiliser ChatGPT comme outil d'aide et non comme solution

### Suggestions pour le prof

- Organiser des exercices pédagogiques : demander une reformulation écrite avant le code.
- Valoriser la progression, pas la solution finale immédiate.
- Mieux vaut 10 exercices courts qu'un gros labo mal compris.