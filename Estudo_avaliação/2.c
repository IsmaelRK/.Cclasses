#include <stdio.h>

main(){

    int m[5][5];
    int i, j, cont = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){

            m[i][j] = cont;
            cont++;

        }
    }



for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){

            if (((i + j) % 2) == 0){

                printf("%02d ", m[i][j]);

            }
            else{
                printf("X ");
            }

        }
        printf("\n");
    }


}