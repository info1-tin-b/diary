# Semaine 04/16

- [x] Fin exercice ELO
- [x] printf, scanf
- [x] Labo-03 : Darts (Fléchettes)
- [x] Rappel types entiers (char, short, int, long, long long)
- [x] Nouveaux types entiers (int32_t, uint32_t, uint_least32_t, uint_fast32_t)
- [ ] IEEE 754
- [ ] 1/sqrt(x)

## Rappel types entiers

```c
char, signed char
short, short int, signed short int
int, signed int
unsigned int 
long, signed long, long int, signed long int
unsigned long, unsigned long int
long long, long long int, signed long long int
unsigned long long, unsigned long long int 
```

Positif ou Relatif:
  - signé (signed)
  - non signé (unsigned)
Types:
  - char (8)
  - short (16)
  - int (32)
  - long (32/64)
  - long long (64)


uint8_t c'est un type entier de très exactement 8-bit (les ordinateur avec des autoroutes plus grandes peuvent aller se faire voir ailleur... (bref pas possible)): donc c'est restrictif
uint_least8_t c'est un type entier d'au moins 8-bit, mais le plus petit possible (c'est à dire qu'il peut être plus grand)
uint_fast8_t c'est un type entier d'au moins 8-bit, le plus rapide pour le processeur


[u]int[_least|_fast|][8|16|32|64]_t

uint8_t
int8_t
uint16_t
int16_t
int32_t
uint32_t
uint64_t
int64_t

uint_least8_t
int_least8_t
uint_least16_t
int_least16_t
int_least32_t
uint_least32_t
uint_least64_t
int_least64_t

uint_fast8_t
int_fast8_t
uint_fast16_t
int_fast16_t
int_fast32_t
uint_fast32_t
uint_fast64_t
int_fast64_t


```c
// Moderne (mais chiante)
#include <stdint.h>

int main() {
    uint_least8_t age;
    uint_least32_t toto;

}
```

```c
// Pragmatique
int main() {
    int age;
    int toto;
}
```