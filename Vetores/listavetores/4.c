#include <stdio.h>

main(){

    int vA[5], i, sumimp = 0;


    for (i = 0; i < 5; i++){

        printf("Digite um Numero: ");
        scanf("%d", &vA[i]);

    }

    for (i = 0; i < 5; i++){

        if(vA[i] % 2 != 0){
            sumimp += vA[i];
        }
    }

    printf("A som eh: %d", sumimp);
}