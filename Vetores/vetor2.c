#include <stdio.h>

main(){

    int v[6], i;

    for (i = 0; i < 6; i++){

        printf("Entre Com os Numeros: ");
        scanf("%d", &v[i]);

    }

    for (i = 5; i >= 0; i--){

        printf("\nNumeros em Ordem Inversa: %d", v[i]);

    }

}