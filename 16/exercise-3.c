#include <stdio.h>
#include <stdbool.h>

void compute(int x, int y);

// "./a.out" "--max=23" "--min=42"
int main(int argc, char *argv[]) {
    int x, y;
    bool x_ok = false, y_ok = false;
    for (int arg = 1; arg < argc; arg++) {
        if (sscanf(argv[arg], "--min=%d", &x) == 1) { x_ok = true; continue; }
        if (sscanf(argv[arg], "--max=%d", &y) == 1) { y_ok = true; continue; }
        fprintf(stderr, "Invalid argument\n");
        return 1;
    }
    if (!x_ok || !y_ok) {
        fprintf(stderr, "Missing one option");
        return 1;
    }
    compute(x, y);
}

#if 0
        const char *minstr = "--min=";
        if (strncmp(argv[arg], minstr, strlen(minstr)) == 0) {
            // x = atoi(&argv[arg][5]); // Trop primitif, pas d'erreur
            if (sscanf(&argv[arg][strlen(minstr) - 1], "%d", &x) != 1) {
                fprintf(stderr, "Erreur");
                return 1;
            }
        }
#endif 