#include <stdio.h>
#include <math.h>

main(){

    int x, i = 1, sum = 0;

    for(i = 1; i <= 64; i++){

        x = pow(i, 2);
        sum += x;

    }

    printf("\nA rainha deve: %d grãos de trigo", sum);

}

// Não é possivel obter o resultado correto devido a quantia de valores que int armazena