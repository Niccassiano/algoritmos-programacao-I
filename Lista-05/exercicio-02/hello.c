#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));
    int A,B,C;

    A = rand () % 10 + 1;
    B = rand () % 10 + 1;
    C = rand () % 10 + 1;


    printf("Esses sao os numeros sorteados: %d %d %d\n", A,B,C);

    // Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.

    if ( A < B + C && B < A + C && C < B + A) {
        printf("Esses numeros podem ser um triangulo\n");

        if ( A == B && B == C) {
            printf("Esse triangulo e Equilatero\n");
        }

        else if (A == B || B == C || C == A) {
            printf("Esse triangulo e Isosceles\n");
        }

        else {
            printf("Esse triangulo e Escaleno\n");
        }

        if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B){
            printf("Esse triangulo e Retangulo\n");
        }    

    }  
     
        else {
            printf("Esses numeros nao podem ser um triangulo\n");
        }


    return 0;

}