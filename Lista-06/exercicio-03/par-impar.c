#include <stdio.h>
#include <stdlib.h>

int main (){


    int numero, i;

    printf("Digite 5 numeros inteiros:\n");

    for (i = 1; i <= 5; i++){
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("Esse numero: %d\n e par\n", numero);
        }

        else {
            printf("Esse numero: %d\n e impar\n", numero);
        }
    }


    return 0;


}