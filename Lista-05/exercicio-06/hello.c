#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int n1, n2;
    int contador = 0;

    n1 = rand() % 10 + 1;
    n2 = rand() % 10 + 1;

    printf("Numero 1: %d\n", n1);
    printf("Numero 2: %d\n", n2);

    if (n1 >= 3 && n1 <= 7) {
        contador++;
    }

    if (n2 >= 3 && n2 <= 7) {
        contador++;
    }

    printf("Quantidade de numeros entre 3 e 7: %d\n", contador);

    return 0;
}