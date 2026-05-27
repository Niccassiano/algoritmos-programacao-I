#include <stdio.h>
#include <stdlib.h>

int main (){
     int numero;
     printf("Escolha um numero:\n");
     scanf("%d", &numero);

     if ( numero > 80 || numero < 25 || numero == 40) {
        printf("Voce escolheu um numero correto\n");
     }
     return 0;
}