#include <stdio.h>
#include <stdlib.h>

int main  () {
    int numero;
    printf("Digite um numero:\n");
    scanf("%d",&numero);

    if (numero % 10 == 0){
        printf("E multiplo de 10\n");
    }

    else {
        printf("Nao e multiplo de 10\n");
    }

    return 0;
}