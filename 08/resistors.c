#include <stdio.h>

// ./parallel 100 200 500 770 42 55
int main(int argc, char*argv[]) {
    double sum = 0.;    
    if (argc <=1 ) return 5;
    for (int i = 1; i < argc; i++) {
        double value = 0.;
        if (sscanf(argv[i], "%lf", &value) != 1) return 1;
        sum += 1.0 / value;    
    }
    printf("%lf\n", 1.0 / sum);
} 
