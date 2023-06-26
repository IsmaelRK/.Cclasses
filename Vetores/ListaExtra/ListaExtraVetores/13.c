#include <stdio.h>

main(){

    int v[20], i, pares = 0, m5 = 0;

    for(i = 0; i < 20; i++){
        printf("Digite um Numero: ");
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 20; i++){
        if(v[i] % 2 == 0){
            pares++;
        }

        if(v[i] % 5 == 0){
            m5++;
        }

    }

    printf("\nQuantidade de Pares: %d", pares);
    printf("\nQuantidade de Multiplos de 5: %d", m5);

}