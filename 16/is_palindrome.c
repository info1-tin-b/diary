/**
 * kayak
 */
#include <stdbool.h>

bool is_palindrome(const char s[]) {
    const int size = strlen(s);
    for (int i = 0; i < size / 2; i++)
        if(s[i] != s[size - 1 - i]) 
            return false;
    return true;
}

bool is_palindrome(const char s[]) {
    const int size = strlen(s);
    for (int i = 0, j = size - 1; i < j; i++, j--)
        if(s[i] != s[j]) return false;
    return true;
}

bool is_palindrome(const char s[]) {
    char *start = s, *end = s + strlen(s);
    while(start < end)
        if(*start++ != *end--) 
            return false;
    return true;
}

/**
ka 
s[0] == s[size - 1]

kay
s[0] == s[size - 1]

kaya
s[0] == s[size - 1]
s[1] == s[size - 2]

kayak
s[0] == s[size - 1]
s[1] == s[size - 2]

bonhomme
s[0] == s[size - 1]
s[1] == s[size - 2]
s[2] == s[size - 3]
s[3] == s[size - 4]

for (int i = 0; i < size / 2; i++)
    s[i] == s[size - 1 - i]
 */