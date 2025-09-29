#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[]) {
   int a = atoi(argv[1]);
   int b = atoi(argv[2]);
   int r = 0;
calcul:
   if (b == 0) {
      printf("le pgcd est %d\n", a);
      return 0;
   }
   else {
      r = a % b;
      a = b;
      b = r;
      goto calcul;
   }
}
