// Questão 2 refeita e corrigida como pedido

#include <stdio.h>

main(){

    int ord = 5, m[ord][ord], dif[10], vetA[10], vetB[10];
    int i, j, contA = 0, contB = 0;

    for(i = 0; i < ord; i++){
        for(j = 0; j < ord; j++){
            printf("Digite o Valor: ");
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < ord; i++){
        for(j = 0; j < ord; j++){

            if ((i + j) >= ord){
                vetA[contA] = m[i][j];
                contA++;
            }

            if (i < j){
                vetB[contB] = m[i][j];
                contB++;
            }
        }
    }


    for(i = 0; i < 10; i++){

        dif[i] = vetA[i] - vetB[i];
        printf("\n%d", dif[i]);
    }

}
