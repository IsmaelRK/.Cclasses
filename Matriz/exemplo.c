#include <stdio.h>

main(){

    int m[3][3], i, j;


    for(i = 0; i < 3; i++){

        for(j = 0; j < 3; j++){

            printf("Entre com os elementos da matriz: ");
            scanf("%d", &m[i][j]);

        }

    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            printf("%d ", m[i][j]);

        }
    printf("\n");

}
}