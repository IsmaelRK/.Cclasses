#include <stdio.h>

main(){


    int m[3][3], v[3];
    int i, j, cont=1;

    for (i = 0; i < 3; i++){
        printf("\nDigite Valor Para o Vetor: ");
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            m[i][j] = cont;
            cont++;

        }
    }

    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            m[i][j] = m[i][j] * v[i];

        }
    }

    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            printf("%02d ", m[i][j]);

        }
        printf("\n");
    }

}