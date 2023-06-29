#include <stdio.h>

main(){

    int m[10][10], i, j, produto, entrada_temp;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){

            printf("Digite um Numero: ");
            scanf("%02d", &m[i][j]);
        }
    }


    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){

            printf("%02d", m[i][j]); // %02d adiciona um 0 na frente dos números < 10 ou > -10
        }
        printf("\n");
    }

    printf("\n-------------------------------------");

    for(i = 0; i < 10; i++){
        for(j=0; j < 10; j++){

            if(i > j){
                if(j < 9){
                    produto += m[i][j] * m[i+1][j+1];
                }
                else{
                    
                }
                printf("\n Produto: %d", produto);
            }

        }

    }

}