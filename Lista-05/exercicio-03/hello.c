#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
    
    srand (time(NULL));

    int numero;
    int palpite1, palpite2;

    numero = rand () % 10 + 1;

    printf("Tente acertar o numero sortrado de 1 a 10\n");
    scanf("%d", &palpite1);

    if (palpite1 == numero) {
        printf("Parabens, voce acertou o numero!\n");
    }

    else {
        printf("Voce errou, tente novamente\n"); 
        scanf("%d", &palpite2);

        if (palpite2 == numero){
            printf("Parabens, voce acertou o numero!\n");
        }

        else {
            printf("Voce errou! O numero sorteado era: %d\n", numero);
        }
    }

    return 0;

}