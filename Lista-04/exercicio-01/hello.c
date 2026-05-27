#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero == 14 || numero == 24 || numero == 23 || numero == 32 || numero == 33) {
        printf("SENAC\n");
    }
    
    return 0;
}