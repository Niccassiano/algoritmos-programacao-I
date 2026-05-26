#include <stdio.h>
#include <stdlib.h>

int main () {
    int diametro;
    float area;
    float circunferencia;

    // diametro = D = 2R
    // r = 5
    diametro = 2 * 5;

    // area = A = PI * r^2
    area = 3.1415 * (5 * 5);

    // circunferencia = 2PI * r
    circunferencia = 2 * 3.1415 * 5;

    printf("Eu tenho um círculo de raio 5. Portanto o diâmetro é %d A área é %f E a medida da circunferência é %f", diametro, area, circunferencia);

    return 0;
}