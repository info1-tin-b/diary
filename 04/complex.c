#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <complex.h>

/**
 * Ascii to complex number conversion
 */
_Complex double atoc(const char* str) {
    double real = 0.0, imag = 0.0;
    char sign = '+', j = '\0';
    int offset = 0;

    while (isspace(*str)) str++;

    if (sscanf(str, "%lf%n", &real, &offset) == 1)
        str += offset;


    while (isspace(*str)) str++;

    if (*str == '+' || *str == '-') {
        sign = *str;
        str++;
    }

    while (isspace(*str)) str++;


    if (sscanf(str, "%lf%c", &imag, &j) == 2 && j == 'j')
        if (sign == '-')
            imag = -imag;
    else if (*str == 'j')
        imag = (sign == '-') ? -1.0 : 1.0;
    else if (offset == 0)
        real = atof(str);

    return real + imag * I;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        _Complex double z = atoc(argv[1]);

        printf("Real: %f\n", creal(z));
        printf("Imag: %f\n", cimag(z));
    }
}

