#include <stdio.h>
#include <stdlib.h>

int main (){

    // Divisor é todo número que divide sem sobrar resto.

    int i, numero;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    for (i =1; i <= numero; i++){
        if (numero % i == 0){
            printf("%d\n",i);
        }
    }

    return 0;


}