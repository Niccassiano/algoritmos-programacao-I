#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    int escolha;
    int usuario;
    int computador;
    int soma;

    printf("Escolha: 1 para Par ou 2 para Impar\n");
    scanf("%d", &escolha);

    printf("Digite um numero inteiro de 1 a 10\n");
    scanf("%d", &usuario);

    computador = rand () % 10 + 1;

    printf("O numero sorteado pelo computador foi: %d\n", computador);

    soma = usuario + computador;

    printf("A soma dos numeros e: %d\n", soma);

    if (soma % 2 == 0 ) {
        printf("O numero e par\n");

        if (escolha == 1) {
            printf("Parabens, voce ganhou!\n");
        }

        else {
            printf("Voce perdeu! Tente novamente\n");
        }

    } else {    
        printf("O numero e impar\n");

        if (escolha == 2) {
            printf("Parabens, voce ganhou!\n");
        }

        else {
            printf("Voce perdeu! Tente novamente\n");
        }
    }

    return 0;

}