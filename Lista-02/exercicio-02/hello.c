#include <stdio.h>
#include <stdlib.h>

int main () {

    float consumo;
    // consumo medio (medido em Km/l) do carro
    float distancia;
    // distancia total percorrida (medida em Km)
    float volume;
    // volume do combustivel cobsumido para percorrer a distancia total (medido em litros)

    printf("Coloque aqui a distancia total, em decimal\n");
    scanf("%f", &distancia);

    printf("Coloque aqui o volume de conbustivel, em decimal\n");
    scanf("%f", &volume);

    // km ÷ litros = km/l
    consumo = distancia / volume;

    printf("O consumo medio do carro é de %f Km/l", consumo);

    return 0;





}