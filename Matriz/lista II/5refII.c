#include <stdio.h>

main(){

    int m[10][10], m2[10][10];
    int i, j;
    
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

            if (i == j){
                m2[i][j] = m[(10 - 1 - i)][(10 - 1 - i)];
            }
            else if (j == (10 - 1 - i)) {
                m2[(10 - 1 - i)][(10 - 1 - i)] = m[i][j];
            }
            else {
                m2[i][j] = m[j][i];
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
}