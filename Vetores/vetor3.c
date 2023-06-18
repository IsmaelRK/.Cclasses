#include <stdio.h>

main(){

    int v[10], i;

    for(i = 0; i < 10; i++){

        printf("Digite o Numero: ");
        scanf("%d", &v[i]);
    }


    for(i = 0; i < 10; i++){

        if (i % 2 == 0){
            printf("\nO Numero eh: %d", v[i]);
        }
    }

}