#include <stdio.h>
#include <stdlib.h>

int main () {

    int i;
    // ele vai somar ate chegar a 20

    for (i = 1; i <= 20; i++){
        printf("%d - %d\n", i, i * i);
    }

    return 0;
}