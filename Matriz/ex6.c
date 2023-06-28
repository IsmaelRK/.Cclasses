#include <stdio.h>

main(){

    int i, j, m[3][3], sum_1clm = 0, sum_1lin = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            printf("Digite um Numero: ");
            scanf("%d", &m[i][j]);

        }
    }

    for(i = 0; i < 3; i++){

        sum_1clm += m[i][0];

    }

    for(j = 0; j < 3; j++){

        sum_1lin += m[0][j];

    }

}