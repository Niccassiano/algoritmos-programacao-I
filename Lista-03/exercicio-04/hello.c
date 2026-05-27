#include <stdio.h>
#include <stdlib.h>

int main (){
    int valor1, valor2;
 
    printf("Digite o valor1:\n");
    scanf("%d", &valor1);

    printf("Digite o valor2:\n");
    scanf("%d", &valor2);

    if (valor1 > valor2){
        printf("O Valor 1 e maior\n");
    }

    else if (valor1 == valor2){
        printf("Os Valores sao IGUAIS\n");
    }

    else {
        printf("O Valor 2 e maior\n");
    }

    return 0;

}