#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("francais.txt", "r");
    char search[64] = "a..dite";
    //strcat(search, "\r\n");

    char *s = search;
    char *c = strchr(search, '.');
    if (!c) c = search + strlen(search);
    char tmp = *c; 
    *c = '\0';
    printf("%s\n", s);
    return 0;
    for (int i = 0; i < 5000; i++) {
        char str[128] = {};
        fgets(str, 100, fp);
        if (strlen(str) != 9) continue;
        if (strstr(str, "dite\r\n") && str[0] == 'a') {
            printf("%s\n", str);
        }
    }
}