#include <stdio.h>

main(){

    int m[5][5], m2[5][5], infer, supr;
    int i, j;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Digite: ");
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

            if (i < j){
                m2[i][j] = m[j][i];
            }

            if (i > j){
                m2[i][j] = m[j][i]; 
            }

            if (i == j){
                m2[i][j] = m[i][j];
            }
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%02d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n ----------------------------------------------------------\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%02d ", m2[i][j]);
        }
        printf("\n");
    }


}