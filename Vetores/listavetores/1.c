#include <stdio.h>

main(){

    int v[15], i;

    for(i = 0; i < 15; i++){

        printf("Digite um Numero: ");
        scanf("%d", &v[i]);


    }


    for(i = 0; i < 15; i++){

        if(i % 2 == 0){
            printf("\nNumero no Indice Par: %d", v[i]);
        }
        

    }

}