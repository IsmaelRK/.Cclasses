#include <stdio.h>

main(){

    int i, j;
    int m[5][5], m2[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um Numero: ");
            scanf("%d", &m[i][j]);
        }

    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%02d ", m[i][j]);
        }
        printf("\n");

    }

    printf("\n");
    printf("\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){

            if((i + j) % 2 == 0){
                m2[i][j] = m[i][j];
                printf("%02d ", m2[i][j]);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
        
    }

    
}