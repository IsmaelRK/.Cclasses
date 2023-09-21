#include <stdio.h>

int main(){

    int l, c, A[3][3], soma = 0;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){

            printf("Digite valor para A: ");
            scanf("%d", &A[l][c]);

        }
    }


    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){

            if (l < c){
                soma += A[l][c];
            }

        }
    }

    printf("\n A soma dos elementos eh: %d", soma);





}