#include <stdio.h>

main(){

    int l, c, A[2][2], maior = 0, B[2][2];

    for(l = 0; l < 2; l++){
        for(c = 0; c < 2; c++){

            printf("Digite valor para A: ");
            scanf("%d", &A[l][c]);

        }
    }

    for(l = 0; l < 2; l++){
        for(c = 0; c < 2; c++){

            printf("Digite valor para B: ");
            scanf("%d", &B[l][c]);

        }
    }

    for(l = 0; l < 2; l++){
        for(c = 0; c < 2; c++){

            if (l == c){
                if(A[l][c] > maior)
                maior = A[l][c];
            }

        }
    }

    for(l = 0; l < 2; l++){
        for(c = 0; c < 2; c++){

            B[l][c] = A[l][c]/maior;

        }
    }

    for(l = 0; l < 2; l++){
        for(c = 0; c < 2; c++){

            printf("%d", B[l][c]);

        }
        printf("\n");
    }




}