#include <stdio.h>

main(){

    int i, j, sum = 0, count = 0, med;
    int a[4][4];


    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um Numero: ");
            scanf("%d", &a[i][j]);
        }

    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%02d ", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            
            if(i > j){
                sum += a[i][j];
                count++;
            }

        }

    }

    med = sum/count;
    printf("Media dos Elementos abaixo da DP: %02d", med);

}