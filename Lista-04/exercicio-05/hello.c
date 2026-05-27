#include <stdio.h>
#include <stdlib.h>

int main () {

    int A,B,C;

    printf("Digite 3 valores inteiros:\n");
    scanf("%d %d %d", &A, &B, &C);

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
    }

    return 0;

}