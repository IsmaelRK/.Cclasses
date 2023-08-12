#include <stdio.h>
#include <stdlib.h>

int main(){

    int m[10][10], m2[10][10];
    int i, j, l, c, temp, temp2;
    int dp[10], ds[10];

    int cont = 0;
    
    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){

            // printf("Digite o Valor: ");
            // scanf("%d", &m[i][j]);

            m[i][j] = cont;
            cont++;

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

                temp = m[i][j];

                m2[1][j] = m[7][c];
                m2[7][j] = temp;
            }

            else if (j == 9){

                temp = m[i][j];

                m2[i][j] = m[9][j];
                m2[i][9] = temp;
            }
        }
    }


    for(i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){

            if (i == j){
                temp = m[i][j];
                dp[i] = temp;
            }

            if (j == (10 - 1 - i)){
                temp = m[i][j];
                ds[i] = temp;
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

    // getchar;
    return 0;

}