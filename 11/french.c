#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("francais.txt", "r");
    char search[64] = "a..dite";
    //strcat(search, "\r\n");

    // Replace all . with \0
    for (int i = 0; i < strlen(search); ++i)
        if (search[i] == '.') search[i] = '\0';

    char *s = search;
    char *e = &(search[sizeof(search) - 1]);
    size_t pos = 0;
    // Search for first \0
    printf("%p %p\n", s, e);
    while (&s[pos] < e) {
        printf("%p %p\n", s, e);
        char* u = strchr(s, '\0');
        printf("%ld: %s\n", pos, s);
        // Search for next non null char 
        while(s[pos] != '\0' || s[pos] < e ) ++pos;
    }
    printf("%ld: %s\n", pos, &s[pos]);
    // char *s = search;
    // char *c = strchr(search, '.');
    // if (!c) c = search + strlen(search);
    // char tmp = *c; 
    // *c = '\0';
    // printf("%s\n", s);
    // return 0;
    // for (int i = 0; i < 5000; i++) {
    //     char str[128] = {};
    //     fgets(str, 100, fp);
    //     if (strlen(str) != 9) continue;
    //     if (strstr(str, "dite\r\n") && str[0] == 'a') {
    //         printf("%s\n", str);
    //     }
    // }
}