#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero;

    do {
        printf("Solicite um numero:\n");
        scanf("%d", &numero);
    } while (numero < 10 || numero > 20);

    return 0;


}