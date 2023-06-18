// -Armazenar 8 números em um vetor e imprimir todos os números. Ao final, teremos o total
// de números múltiplos de seis digitados.

#include <stdio.h>

main(){

    int v[8], i;
    for (i = 0; i < 8; i++){

        printf("Digite um Numero: ");
        scanf("%d", &v[i]);

    }

    for (i = 0; i < 8; i++){

        if(v[i] % 6 == 0){
            printf("eh multiplo de 6: %d", v[i]);
        }

    }

}