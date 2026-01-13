#include <math.h>
#include <limits.h>

typedef struct {
    double x;
    double y;
    double z;
} Point;

typedef struct {
    char name[50];
    int age;
    Point address;
} Student;


double distance(Point p, Point q) {

    return sqrt(p.x*p.x + p.y*p.y + p.z*p.z
                - (q.x*q.x + q.y*q.y + q.z*q.z));
}

Point random_point() {
    Point p = {.x = (double)rand() / INT_MAX * 1000.0, 
               .y = (double)rand() / INT_MAX * 1000.0,
                .z = (double)rand() / INT_MAX * 1000.0
               };
    return p;
}

int main() {
    Point p;
    Point q = {.x = 4.0, .y = 5.0, .z = 6.0};

    Student luca = {.name = "Luca", 
                    .age = 20, 
                    .address = {.x = 46.45249093813125, 
                                .y = 6.9020850028345161, 
                                .z = 500}};

    printf("Luca vis à la coordonnée x: %f\n", luca.address.x);
    p.x = 1.0;
    p.y = 2.0;
    p.z = 3.0;
}