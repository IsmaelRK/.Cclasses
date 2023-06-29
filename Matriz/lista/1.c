#include <stdio.h>

main(){

    int m[4][4], sum_dig_princ = 0, sum_dig_secun = 0, i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            printf("Digite um Numero: ");
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            if (i == j){
                sum_dig_princ += m[i][j];
            }
            if (j == (4 - 1 - i)){
                sum_dig_secun += m[i][j];
            }
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            printf("%02d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos Elementos da Diagonal Principal: %d", sum_dig_princ);
    printf("\nSoma dos Elementos da Diagonal Secundaria: %d", sum_dig_secun);


}