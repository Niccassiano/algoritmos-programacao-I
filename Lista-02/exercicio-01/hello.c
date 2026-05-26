#include <stdio.h>
#include <stdlib.h>

int main () {

    float nota;
    float nota2;
    float media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota + nota2) / 2;

    printf("Sua nota 1 foi de: %f , sua nota 2 foi de: %f e sua media foi de: %f", nota, nota2, media);

    return 0;


}