#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim, contl, contc;
    int subt;

    printf("Digite a dimensão da matriz quadrada: ");
    scanf("%d", &dim);
    printf("\n");

    int matriz[dim][dim], diag_principal = 0, diag_sec = 0;

    for (contl=0; contl<dim; contl++)
    {
        printf("Digite os valores da %d. a linha:\n",contl+1);

        for (contc=0; contc<dim; contc++){
            printf("Digite os valores da %d. a coluna:\n",contc+1);
            scanf("%d", &matriz[contl][contc]);

        }
    }

    

    for (contl=0; contl<dim; contl++){
        for (contc=0; contc<dim; contc++)
        {
            if(contl==contc){
               diag_principal += matriz[contl][contc];
            }

            if(contc == (dim - contl - 1)){
                diag_sec += matriz[contl][contc];
            }
        }
    }
    
    
    subt = diag_principal - diag_sec;
    printf("\n----------------------");

    printf("\n prim = %d\n", diag_principal);
    printf("\n sec = %d\n", diag_sec);

    printf("\n----------------------");

    printf("\n Matriz");
    printf("\n");
    for (contl=0; contl<dim; contl++){
        for (contc=0; contc<dim; contc++){
            printf("%d\t",matriz[contl][contc]);
        }
        printf("\n");
    }

    printf("\n\n A soma da diagonal principal menos a soma da diagonal secundária e %d\n", subt);
    getc;
}

// É um programa que recebe dados para uma matriz, e realiza a soma dos elementos da diagonal principal e depois da secundária
// Ao final, mostra para o usuário a matriz e o valor da subtração entre a diagonal principal e secundaria