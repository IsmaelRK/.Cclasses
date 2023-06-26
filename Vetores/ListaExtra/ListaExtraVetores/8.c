#include <stdio.h>

main(){

    int v[10], i, ref, qtd = 0;

    for(i = 0; i < 10; i++){

        printf("Digite um Numero: ");
        scanf("%d", &v[i]);

    }

    printf("Digite um Valor de Referencia: ");
    scanf("%d", &ref);

    for(i = 0; i < 10; i++){

        if(v[i] > ref){
            printf("\nMaior que a Referecia: %d", v[i]);
        }

        if(v[i] < ref){
            printf("\nMenor que a Referecia: %d", v[i]);
        }

        if(v[i] == ref){
            qtd++;
        }

    }

    printf("\nValor de Referencia Aparece no Vetor: %d Vezes", v[i]);
}