#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero >= 15 && numero <= 25 || numero >= 45 && numero <= 50)
    {
        printf("ERRO\n");
    }

    return 0;
}