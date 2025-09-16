#include <stdio.h>

int main() {
    char outsideTemperature = 128;

    short outsideTemperatureF = outsideTemperature * 9/5 + 32;

    printf("Température extérieure: %hhd °C\n", outsideTemperature);
    printf("                        %hd °F\n", outsideTemperatureF);

    return 0;
}