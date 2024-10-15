# Semaine 05/16

- [x] Règle de codage
- [ ] `const`


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
