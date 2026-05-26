#include <stdio.h>
#include <stdlib.h>

int main () {
    float grausCelsius;
    float grausFahrenheit;

    printf("Digite aqui a temperatura em graus Celsius\n");
    scanf("%f", &grausCelsius);

    grausFahrenheit = (grausCelsius * 9 / 5) + 32;
    // F = (C * 9/5) + 32
    printf("Aqui esta a temperatura em graus Fahrenheit: %f\n", grausFahrenheit);

    return 0;
}