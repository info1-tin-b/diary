// Bizarrie

int main() {
    float u;
    double v;

    // Selon le standard C un float qui passe par l'ALU (ou passé à une fonction) sera
    // implicitement converti en double.
    
    printf("%f", u); // Promotion implicite de float en double 
    printf("%f", v); // Donc pas besoin de mettre le %lf

    scanf("%f", &u); // L'adresse d'un float, %f
    scanf("%lf", &v); // L'adresse d'un double %lf
}