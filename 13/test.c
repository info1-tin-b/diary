#include <stdio.h>
#include <string.h> 

int main() {
    char m[] = "BONJOUR";
    char k[] = "ABCD";

    const size_t message_size = strlen(m);
    const size_t key_size = strlen(k);

    int j = 0;
    for (int i = 0; i < message_size; i++) {
        m[i] = 'A' + ((m[i] - 'A') + (k[j] - 'A')) % 26; 
        j++;
        j %= key_size;
    }
    
    printf("%s\n", m);
}