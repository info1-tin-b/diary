# Code Review sur le labo test

## Règles générales

Toujours compiler avec les drapeaux suivants:

```c
gcc -Wall -Wextra -std=c20
```

Initialisez vos tableaux :

```c
int grid[HEIGHT][WIDTH] = {0};
```

Indentez votre code: `CTRL+SHIFT+P` puis format document.

Ajouter toujours un en-tête à votre programme:

```c
/**
 * Nom du programme.
 *
 * But du programme...
 */
```

## Alexandre Pilloud

Commentaires de fonctions, en dessus des fonctions

```c
void init(int grid[HEIGHT]
                  [WIDTH]) { // function to remove any parasite data in the grid
  for (int row = 0; row < HEIGHT; row++) {
    for (int col = 0; col < WIDTH; col++) {
      grid[row][col] = 0;
    }
  }
}
```

SSOT

```c
  do {
    time += DT;
    x = round(vx0 * time);
    y = round(Y0 + vy0 - ((time * time) * 9.81) / 2);
    if (y > HEIGHT || x > WIDTH)
      break;
    grid[y][x] =
        round(sqrtl(vx0 * vx0 + (vy0 - time * 9.81) * (vy0 - time * 9.81)));

  } while (y < HEIGHT && x < WIDTH);

  return sqrtl(vx0 * vx0 + (vy0 - time * 9.81) * (vy0 - time * 9.81));
```

## André Dossantos

Retours à la ligne: 80-100 colonnes maximum.

```c
/*
Objectif:
implémenter numériquement une simulation itérative de la trajectoire d’un projectile soumis uniquement à la gravité et de représenter cette trajectoire dans un tableau 2D
*/
```

## Aurélien Cornuz

Pourquoi `g` en minuscules ?

```c
#define WIDTH 100 // largeur de la matrice (portée en m)
#define HEIGHT 20 // hauteur de la matrice (altitude en m)
#define Y0 10.0   // hauteur initiale du projectile (en m)
#define DT 0.01   // pas de temps en secondes
#define g 9.81
```

## Carlos Bouzas

Le scope de vos variables

```c
double simulate(double angle_deg, double v0, int grid[HEIGHT][WIDTH]){
    double v_norm,v_x0,v_y,v_y0,x_t,y_t;
    int t = 0;
```

## Jonathan Greppin

Pourquoi une variable inutile ?

```c
double deg_to_rad(double angle_deg) {
  const double PI = 3.14159265359;
  double rad = angle_deg * PI / 180;
  return rad;
}
```

## Nicolas Bessson

Pas de déclaration anticipées

```c
double deg_to_rad(double deg);
double simulate(double angle_deg, double v0, int grid[HEIGHT][WIDTH]);
void display(int grid[HEIGHT][WIDTH]);
```

Variable inutile

```c
// Conversion de degrés en radians
double deg_to_rad(double deg)
{
    double angle_rad = deg / 180.0 * 3.1415;
    return angle_rad;
}
```

Cohérence de nommage

```c
double angle_rad = deg_to_rad(angle_deg);
double Vyt = simulate(angle_deg,v_in,matrix);
```

## Theo Martinez

```c
// Conversion de degrés en radians
double deg_to_rad(double deg){
    double rad = (deg * 2*3.14) / 360;

}
```
