#include <stdio.h>

main(){

    int v[40], i, sum = 0;

    for(i = 0; i < 40; i++){

        printf("Digite um Numero: ");
        scanf("%d", &v[i]);

    }

    for(i = 0; i < 40; i++){

        if(i > 0){
            v[i] = (v[i] + v[i-1]);
        }

    }

    for(i = 0; i < 40; i++){

        printf("\nEh: %d", v[i]);

    }
}
