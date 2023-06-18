#include <stdio.h>

main(){

    int v[6], i, vB[6];

    for(i = 0; i < 6; i++){

        printf("Digite um Numero: ");
        scanf("%d", &v[i]);

    }

    for(i = 0; i < 6; i++){

        if(i % 2 == 0){

            vB[i] = (v[i] + 20);

        }
        else{
            vB[i] = (v[i] * 3);

        }
    }

    for(i = 0; i < 6; i++){

        printf("\nDigite conjunto B: %d", vB[i]);

    }


}