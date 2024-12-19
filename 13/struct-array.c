#include <stdio.h>


// C'est pas des variables, c'est la définition (prototype) d'une structure
// Y'a un carton qui contient 2 champs : name et age
struct person {
    char name[64];
    int age;
};

void display_person(struct person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

int main() {
    struct person people[] = {{"Bob", 42}, {"Alice", 23}};

    for (int i = 0; i < sizeof(people)/sizeof(people[0]); i++) {
        display_person(people[i]);
    }
}