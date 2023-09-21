#include <stdio.h>

main(){

    char matg[10][2];
    int i, j, acertos = 0, tot = 0;

    for (i = 0; i < 10; i++)
    {
        for(j = 0; j < 1; j++){
            printf("\nDigite o Gabarito da questão N[%d]: ", (i + 1));
            scanf("\n%c", &matg[i][j]);
            tot++;

            if (!((matg[i][j] == 'A') || (matg[i][j] == 'B') || (matg[i][j] == 'C') || (matg[i][j] == 'D') || (matg[i][j] == 'E'))){

                 printf("Alternativa invalida, nao sera computada!");
                 tot--;
                 
            }

        }
    }
    
    for (i = 0; i < 10; i++)
    {
        for(j = 0; j < 1; j++){
            printf("\nDigite a Resposta da questão N[%d]: ", (i + 1));
            scanf("\n%c", &matg[i][j+1]);

            if (matg[i][j] == matg[i][j+1]){
                acertos++;
            }

            if (!((matg[i][j+1] == 'A') || (matg[i][j+1] == 'B') || (matg[i][j+1] == 'C') || (matg[i][j+1] == 'D') || (matg[i][j+1] == 'E'))){

                 printf("Resposta invalida, nao sera computada!");
                 acertos--;
            }

            
        }
    }

    printf("Aceertos: [%d/%d]", acertos, tot);

}