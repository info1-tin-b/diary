// Déclaration en amont
// Prototype de fonction


// Prototype
int nom(int, int, float, double, int*);

// Déclaration en amont
int nom(int a, int b, float c, double d, int*e);

int main() {
    int a;
    nom(2,3,3.14f, 2.71, &a);
}