# Semaine 10/16

## Git 


Exemple d'arbre Git :

```text
*   commit 9fceb02 (HEAD -> main)
|\
| * commit 1a410e (feature)
|/
* commit 0d1d7fc
* commit 7c6d03e
* commit 4b825dc
```

## Notes sur les chaînes de caractères

```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void reverse(char str[]) {
    strcpy(str, "fedcba");
}

bool test_reverse() {
    bool valid = true;

    {
        char test[] = "abcdef";
        reverse(test);
        valid &= strcmp(test, "fedcba") == 0;
    }
    {
        char test[] = "z";
        reverse(test);
        valid &= strcmp(test, "z") == 0;     
    }
    {
        char test[] = "";
        reverse(test);
        valid &= strcmp(test, "") == 0;     
    }    
    #if 0 // We decided to remove this test after the team meeting.
    {
        char test[] = "!!++%";
        reverse(test);
        valid &= strcmp(test, "%++!!") == 0;     
    }    
    #endif    
    return valid;
}

int main() {
    char a[] = "abcd"; // Modifiable
    char *b = "abcd";  // Pas modifiable

    //if (a == "defg") {} // Pas valide
    if (strcmp(a, "defg") == 0) {}

    size_t size = strlen(a);

    assert( (false == false) == true)
}
```