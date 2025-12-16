/**
 * Ballistic trajectory simulation and display
 * in terminal using braille characters.
 *
 * Try with ./a.out 45 32
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define WIDTH 100
#define HEIGHT 20

#define G 9.81   // gravity m/s²
#define DT 0.01  // time step in seconds
#define Y0 10.0  // height of the cannon mouth (cell 0,15)

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double deg_to_rad(double deg) { return deg * M_PI / 180.0; }

/**
 * Simulate the ballistic trajectory.
 * Fills the grid with impact speeds.
 * Returns the impact speed.
 * 
 * @param angle_deg Launch angle in degrees
 * @param v0 Initial speed in m/s
 * @param grid 2D array to fill with impact speeds
 * @return Impact speed in m/s
 */
double simulate(double angle_deg, double v0, int grid[HEIGHT][WIDTH]) {
    double vx0 = v0 * cos(deg_to_rad(angle_deg));
    double vy0 = v0 * sin(deg_to_rad(angle_deg));

    for (double t = 0.0; t <= 100.0; t += DT) {
        double x = vx0 * t;
        double y = Y0 + vy0 * t - 0.5 * G * t * t;

        if (y < 0.0 || x >= WIDTH) break;

        int xi = (int)round(x), yi = (int)round(y);

        if (xi >= 0 && xi < WIDTH && yi >= 0 && yi < HEIGHT) {
            double vy = vy0 - G * t;
            grid[yi][xi] = (int)round(sqrt(vx0 * vx0 + vy * vy));
        }
    }

    double discriminant = vy0 * vy0 + 2.0 * G * Y0;
    double t_impact = (vy0 + sqrt(discriminant)) / G;
    double vy_final = vy0 - G * t_impact;
    return sqrt(vx0 * vx0 + vy_final * vy_final);
}

void display(int grid[HEIGHT][WIDTH]) {
    for (int y = HEIGHT - 1; y >= 0; --y) {
        for (int x = 0; x < WIDTH; ++x)
            printf("%c", grid[y][x] > 0 ? '*' : '.');
        puts("");
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) return 0;
    int grid[HEIGHT][WIDTH] = {0};
    double v = simulate(atof(argv[1]), atof(argv[2]), grid);
    display(grid);
    printf("Vitesse à l'impact: %.2f m/s (%.2f km/h)\n", v, v * 3.6);
}
