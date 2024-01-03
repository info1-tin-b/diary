# Semaine 14/16

- [ ] Pourquoi `FLT_MAX` est différent de `FLT_MIN` et surtout différent de `FLT_TRUE_MIN` ?

## Float

```
$ cat min.c
#include <float.h>
#include <stdio.h>
#include <limits.h>

int main() {
    printf("%e\n", FLT_MAX );
    printf("%e\n", FLT_MIN);
    printf("%e\n", FLT_TRUE_MIN);
    printf("%e\n", -FLT_MAX);
}
$ ./a.out
3.402823e+38
1.175494e-38
1.401298e-45
-3.402823e+38
```

Sitôt que `exp` est nul, pour diviser par deux il faut décaler la mantisse d'un cran vers la droite et donc à chaque division par deux on perd un bit de précision. C'est pourquoi la valeur minimale de la mantisse est `1.0` et non `0.0`.

```
2**((exp if exp else 1) - 127) * ((1 if exp else 0) + mantissa / 2**23)
```