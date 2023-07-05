// Mesmo que o exercicio 4

#include <stdio.h>

main(){

    int x, m[20][20];
    int i, j, rtn = 0;


    for (i = 0; i < 20; i++){
        for (j = 0; j < 20; j++){

            printf("Digite um Valor: ");
            scanf("%d", &m[i][j]);
        }
    }

    printf("Encontrar Valor: ");
    scanf("%d", &x);

    for (i = 0; i < 20; i++){
        for (j = 0; j < 20; j++){

            if (m[i][j] == x){
                printf("\nValor Encontrado, na linha %d e coluna %d", i, j);
                rtn = 1;
            }
        }
    }

    if (rtn == 0){
        printf("Valor não encontrado!");
    }

}