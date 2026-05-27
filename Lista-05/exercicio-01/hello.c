#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    int numero = rand ()% 100 + 1;
    printf("O numero sorteado foi: %d\n", numero);

    if (numero % 2 == 0 ) {
        printf("O numero e par\n");
    } else {    
        printf("O numero e impar\n");
    }

    return 0;

}