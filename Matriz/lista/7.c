#include <stdio.h>

main(){

    int i, j;
    int m[10][10];

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){

            printf("Digite um Numero: ");
            scanf("%d", &m[i][j]);
        }
    }


    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){

            if(j == 10 - 1 - i){
                printf("%02d ", m[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

}