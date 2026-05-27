#include <stdio.h>
#include <stdlib.h>

int main () {

    int i, soma;

    soma = 0;

    for (i = 1; i <= 100; i++){
        soma += i; // soma = soma + i
    }

    printf("A soma dos numeros de 1 a 100 e: %d\n", soma);


}