#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

srand (time(NULL));


// 1 - varivies
int numero1, numero2;
int palpite1, palpite2;

// 2 - sorteio dos numeros
numero1 = rand () % 5 + 1;
numero2 = rand () % 5 + 1;

// 3 - entrada do usuario
printf("Tente acertar o numero sortrado de 1 a 5: Digite o primerio numero \n");
scanf("%d", &palpite1);
printf("Tente acertar o numero sortrado de 1 a 5: Digite o segundo numero \n");
scanf("%d", &palpite2);

// 4 - verificacao dos palpites
if (numero1 == palpite1 && numero2 == palpite2 || numero1 == palpite2 && numero2 == palpite1){
    printf("PARABENS, voce acertou os numeros\n");
}

else {
    printf("Voce errou! Os numeros sorteados eram: %d e %d\n", numero1, numero2);
}


return 0;




}