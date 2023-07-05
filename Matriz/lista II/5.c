#include <stdio.h>

main(){

    int m[10][10], m2[10][10];
    int i, j, l, c;
    int dp[10], ds[10];
    
    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){

            printf("Digite o Valor: ");
            scanf("%d", &m[i][j]);

        }
    }

    printf("----------------------------\n");

    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%02d ", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){

            if (i == 1){
                m2[1][j] = m[7][j];
                m2[7][j] = m[1][j];
            }

            else if (j == 9){
                m2[i][3] = m[i][9];
                m2[i][9] = m[i][3];
            }
        }
    }


    for(i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){

            if (i == j){
                dp[i] = m[i][j];
            }

            if (j == (10 - 1 - i)){
                ds[i] = m[i][j];
            }



        }
    }

    for(i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){

            if (i == j){
                m2[i][j] = ds[i];
            }

            if (j == (10 - 1 - i)){
                m2[i][j] = dp[i];
            }



        }
    }


    printf("----------------------------\n");

    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%02d ", m2[i][j]);
        }
        printf("\n");
    }

}