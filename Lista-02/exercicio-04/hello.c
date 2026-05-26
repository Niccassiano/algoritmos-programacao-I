#include <stdio.h>
#include <stdlib.h>

int main () {
    float volume;
    float raio;
    float altura;

    printf("Digite aqui a medida do raio\n");
    scanf("%f", &raio);

    printf("Digite aqui a medida da altura\n");
    scanf("%f", &altura);

    volume = 3.14 * (raio * raio) * altura;
    // V = PI*R^2*H
    printf("Aqui esta o volume do seu cilindro: %f\n", volume);

    return 0;


}