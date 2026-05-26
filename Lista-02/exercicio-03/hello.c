#include <stdio.h>
#include <stdlib.h>

int main(){

    int homens, QuantHomens;
    int mulheres, QuantMulheres;

    printf("Quantos homens participaram da festa? \n");
    scanf("%d", &QuantHomens);

    printf("Quantas mulheres participaram da festa? \n");
    scanf("%d", &QuantMulheres);

    homens = 20;
    mulheres = 17;

    QuantHomens = homens * QuantHomens;
    QuantMulheres = mulheres * QuantMulheres;

    int ValorArrecadado;

    ValorArrecadado = QuantHomens + QuantMulheres;

    printf("O Valor Arrecadado na festa foi de: %d\n", ValorArrecadado);

    return 0;
}