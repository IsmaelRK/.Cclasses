#include <stdio.h>

main(){

    int a[3][5], soma_coluna[1][5], sc0 = 0, sc1 = 0, sc2 = 0, sc3 = 0, sc4 = 0;
    int i, j;


    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um Valor: ");
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            
            if (j == 0){
                sc0 += a[i][j];
            }

            if (j == 1){
                sc1 += a[i][j];
            }

            if (j == 2){
                sc2 += a[i][j];
            }

            if (j == 3){
                sc3 += a[i][j];
            }

            if (j == 4){
                sc4 += a[i][j];
            }

        }
    }

    for(i = 0; i < 1; i++){
        for(j = 0; j < 5; j++){
            
            if (j == 0){
                soma_coluna[i][j] = sc0;
            }

            if (j == 1){
                soma_coluna[i][j] = sc1;
            }

            if (j == 2){
                soma_coluna[i][j] = sc2;
            }

            if (j == 3){
                soma_coluna[i][j] = sc3;
            }

            if (j == 4){
                soma_coluna[i][j] = sc4;
            }


        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("%02d ", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 1; i++){
        for(j = 0; j < 5; j++){
            printf("%02d ", soma_coluna[i][j]);
        }
        printf("\n");
    }



}