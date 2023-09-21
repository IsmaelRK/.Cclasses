#include <stdio.h>

main(){

    int A[7][7];
    int i, j;


    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){

            printf("Digite um Numero: ");
            scanf("%d", &A[i][j]);

        }
    }


    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){

            printf("%02d ", A[i][j]);

        }
        printf("\n");
    }

    int  men_ac = A[0][0], men_ab = A[6][6];

    printf("\n");
    printf("----------------------------------------------");
    printf("\n");


    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){

            if (i + j <= 7){

                if(A[i][j] < men_ac){
                    men_ac = A[i][j];
                }

            }

            if (i + j > 7 - i){  // ordem + 2 = 9

                if(A[i][j] < men_ab){
                    men_ab = A[i][j];
                }

                
            }
        }
    }

    printf("\nMenor Numero da Diagonal Secundaria Superior: %d", men_ac);
    printf("\nMenor Numero da Diagonal Secundaria Inferior: %d", men_ab);

}