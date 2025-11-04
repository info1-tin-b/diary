# Samaine 07/16

- [ ] Pré et post incrémentation en C

## Opérateurs postfixés et préfixés

Attention, utilisez jamais ces opérateurs dans des expressions complexes, car le comportement est indéfini. Par exemple deux ou plusieurs postfixations ou préfixations sur la même variable dans une même expression.

Dans cet exemple, le comportement est indéfini car `i` est modifié deux fois dans la même expression :

```c
//   4  1  3  2
   i = 10;

   i = i++ + ++i;

   i = i + ++i; i = i + 1;
   i = i + 1; i = i + i; i = i + 1;
   i = i + 1; i = (2*i); i = i + 1;
   (11)      ; (22);      (23);
   // i vaut 23
```

```c
()++; // expression; i = i + 1;
++(); // i = i + 1; expression;
()--; // expression; i = i - 1;
--(); // i = i - 1; expression;

i += 1; // i = i + 1; Addition
i -= 1; // i = i - 1; Soustraction
i *= 2; // i = i * 2; Multiplication
i /= 2; // i = i / 2; Division
i %= 2; // i = i % 2; Modulo
i ^= 2; // i = i ^ 2; OR Exclusif XOR
i &= 2; // i = i & 2; AND 
i |= 2; // i = i | 2; OR 
i <<= 2; // i = i << 2; Décalage à gauche (*2)
i >>= 2; // i = i >> 2; Décalage à droite (/2)
```

