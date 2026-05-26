#include <stdio.h>
#include <stdlib.h>

int main() {

    int A, B, C, delta;

    printf("Informe os valores de A,B e C:\n");
    scanf("%d %d %d", &A, &B, &C);

    delta = (B * B) - 4 * A * C;

    printf("Delta e: %d\n", delta);


    return 0;
}