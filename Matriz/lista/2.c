#include <stdio.h>

main(){


    int i, j, constante, i2, j2;

    printf("Digite o Numero de Linhas para M1: ");
    scanf("%d", &i);

    printf("Digite o Numero de Colunas para M1: ");
    scanf("%d", &j);

    int m[i][j];
    int m2[i][j];

    printf("Digite um Valor para a Constante: ");
    scanf("%d", &constante);



    i2 = i;
    j2 = j;

    for(i = 0; i < i2; i++){
        for(j = 0; j < j2; j++){

            printf("Digite um Numero: ");
            scanf("%d", &m[i][j]);

            m2[i][j] = constante * m[i][j];

        }
    }

    printf("---------------------------------------");
    printf("\n");

    for(i = 0; i < 1; i++){
        for(j = 0; j < 2; j++){

            printf("%02d ", m[i][j]);

        }
        printf("\n");
    }

    printf("---------------------------------------");
    printf("\n");

    for(i = 0; i < 1; i++){
        for(j = 0; j < 2; j++){

            printf("%02d ", m2[i][j]);

        }
        printf("\n");
    }


}