#include <stdio.h>
#include <stdlib.h>

int main() {

   
    int nota1, nota2, media;

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Suas notas sao %d e %d e sua media e %d\n", nota1, nota2, media);


    return 0;
}