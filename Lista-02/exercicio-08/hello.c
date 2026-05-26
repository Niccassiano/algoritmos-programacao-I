#include <stdio.h>
#include <stdlib.h>

int main () {
    float A,B,C, media;
    printf("Digite 3 numeros floats, para calcular a media artimetica: \n");
    scanf("%f %f %f", &A, &B, &C);

    media = (A + B + C) / 3;

    printf("Sua media e: %f\n", media);

    return 0;
}