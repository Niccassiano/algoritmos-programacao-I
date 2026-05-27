#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero;

    printf("Digite um numero maior que 40 que seja multiplo de 5 e 7: \n");
    scanf("%d", &numero);

    if (numero > 40 && numero % 5 == 0 && numero % 7 == 0){
        printf("Parabens\n");
    }
    else {
        printf("Tente novamente\n");
    }

    return 0;
}