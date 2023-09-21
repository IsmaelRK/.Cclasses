#include <stdio.h>

main(){

    int m[2][2], m2[2][2];
    int i, j;
    int op, calc;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite um Numero: ");
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite um Numero: ");
            scanf("%d", &m2[i][j]);
        }
    }



    printf("\n[1] Soma");
    printf("\n[2] Subtracao");
    printf("\n[3] Multiplicacao");
    printf("\n[4] Divisao");

    printf("\nDigite a Operação Desejada: ");
    scanf("%d", &op);

    switch(op){


        case 1:

            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    
                    calc = m[i][j] + m2[i][j];
                    printf("\nSoma dos Elementos: %d", calc);
            }}
            break;

        case 2:

            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    
                    calc = m[i][j] - m2[i][j];
                    printf("\nSubtracao dos Elementos: %d", calc);
            }}
            break;

        case 3:

            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    
                    calc = m[i][j] * m2[i][j];
                    printf("\nMultiplicacao dos Elementos: %d", calc);
            }}
            break;

        case 4:

            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    
                    calc = m[i][j] / m2[i][j];
                    printf("\nDivisao dos Elementos: %d", calc);
            }}
            break;


    }

}