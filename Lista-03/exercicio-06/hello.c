#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A, B;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &A);

    printf("Digite o segundo numero:\n");
    scanf("%d", &B);


    if (A > 10 && B > 10){
        printf("Sim\n");
    }


    return 0;
}