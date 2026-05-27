#include <stdio.h>
#include <stdlib.h>

int main (){

    int i; // controla quantas vezes o for repete (1 a 10)
    int numero; // armazena o numero digitado pelo usuario
    int soma; // vai acumulando todos os números

    soma = 0;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 1; i <= 10; i++){
        scanf("%d", &numero);
        soma += numero; // soma = soma + numero
    }

    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;


}