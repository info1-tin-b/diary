
#include <stdio.h>

void version() {
    printf("Version 1.0.0\n");
}

int main(int argc, char *argv[]) {
    if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'v') {
        version();
        return 0;
    }
}