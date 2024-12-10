# Semaine 12/16

## Travail dirigé

- [ ] Concept d'histogramme
- [ ] Affichage sur le terminal
- [ ] Normalisation de valeurs
- [ ] Binning
- [ ] Lecture depuis l'entrée standard
- [ ] Max-Muller et affichage d'une gaussienne
- [ ] Calcul de l'écart type

### Histogramme

Un histogramme est une représentation graphique de la répartition de données. Il est composé de barres verticales, dont la hauteur représente la fréquence d'apparition d'une donnée.

Une *bin* ou *classe* est un intervalle de valeurs. La hauteur de la barre correspond au nombre d'éléments de l'échantillon qui tombent dans cette classe.

Souvent les données sont normalisées, c'est-à-dire que l'on ramène les valeurs à une échelle commune. Par exemple, on peut ramener les valeurs entre 0 et 10.

### Étapes 

#### 1. Affichage d'un histogramme simple

Un tableau d'entiers est donné. On souhaite afficher un histogramme de ces valeurs.

#### 2. Normalisation

Le tableau des données comprend des valeurs entre 0 et 100.
Impossible de représenter cet histogramme sur le terminal car le nombre de colonnes est limité. 

On normalise alors les valeurs entre 0 et 10. Comment normaliser ? On cherche la valeur maximum, puis on divise toutes les valeurs par ce maximum multiplié par le facteur d'échelle désiré. Attention aux types (/!\ division entière).

#### 4. Données réelles

On lit les données depuis les fichiers founis dans `data` qui représentent une étude de la dépression chez les étudiants issue de [Kaggle](https://www.kaggle.com/datasets/hopesb/student-depression-dataset).

Vous pouvez facilement `cat` les données dans votre programme:

```bash
cat data/age | ./a.out
```