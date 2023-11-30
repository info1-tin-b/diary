// Bizarrie
float u;
double v;

printf("%f", u); // Promotion implicite de float en double 
printf("%f", v); // Donc pas besoin de mettre le %lf

scanf("%f", &u); // L'adresse d'un float, %f
scanf("%lf", &v); // L'adresse d'un double %lf