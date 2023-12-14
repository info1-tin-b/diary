

int main() {
    int n = 10000;
    int m = 6321;
    printf("%f\n", (float)(4*m/n)); // (int) * (int) / (int)
                                    //     (int)     / (int)
                                    //            (int)

    printf("%f\n", (float)(4.*m/n)); // (double) * (int) / (int)
                                    //     (double)     / (int)
                                    //            (double) 
}