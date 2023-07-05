#include <stdio.h>

int main(){

    int m[5][5], m2[5][5], infer[10], supr[10], dp[5];
    int i, j;
    int cont1 = 0, cont2 = 0, cont3 = 0;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Digite: ");
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

            if (i < j){ 
                supr[cont1] = m[i][j];
                cont1++;
            }

            if (i > j){
                infer[cont2] = m[i][j];
                cont2++;
            }

            if (i == j){
                dp[cont3] = m[i][j];
                cont3++;
            }
        }
    }


    cont1 = 0;
    cont2 = 0;
    cont3 = 0;


    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){

            if (i < j){
                m2[i][j] = infer[cont1];
                cont1++;
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

    return 0;


}