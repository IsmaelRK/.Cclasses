#include <stdio.h>
int main ()
{
    float somadiagonal = 0; // Valor atribuido e altrado para float
    int i, j, n = 0;  // Valor atribuido
    float mat[n][n];  // Criada apenas para o programa rodar

    do {
        printf ("N=?");
        scanf ("%d", &n);
        float mat[n][n];  // valor alterado e local
    }while (n == 0);{  // Condição alterada

        for (i=0; i < n; i++) {
            for (j=0; j < n; j++) {  // Reposicionado
                printf ("Digite o valor da posição %d,%d da matriz: ",i+1, j+1);
                scanf("%f", &mat[i][j]);

                if (mat[i][j] < 0){ // Adicionado
                    mat[i][j] = 0;  // Reposicionado
                }

                if (i==j){
                    somadiagonal += mat[i][j];
                }
            }
        }

        printf ("A soma da diagonal principal da matriz e: %.2f\n", somadiagonal);

        printf (" ");
        printf ("\n");


        for (i=0; i < n; i++) {
            for (j=0; j < n; j++) {  // Reposicionado
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }

    }



    return 0; // Reposicionado
}

