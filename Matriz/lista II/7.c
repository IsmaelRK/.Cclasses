#include <stdio.h>

main(){

    int m[4][4];
    int i, j, rtn = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
        
            printf("Digite um Valor: ");
            scanf("%d", &m[i][j]);
    }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
        
            if (i > j){
                
                if (m[i][j] != 0){
                    rtn = 1;
                }

            }

            printf("%02d ", m[i][j]);
        }
        printf("\n");
    }


    if (rtn == 0){
        printf("\nEh uma matriz triangular superior!");
    }
    else{
        printf("\nNAO eh uma matriz triangular superior");
    }



}