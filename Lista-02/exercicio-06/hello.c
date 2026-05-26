#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }

    return 0;
}