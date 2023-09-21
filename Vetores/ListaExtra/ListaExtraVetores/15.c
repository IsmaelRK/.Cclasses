#include <stdio.h>

main(){

    int v[5], v2[5], i, maiormult = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um Numero: ");
        scanf("%d", &v[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        if(maiormult < v[i] || maiormult == 0){
            maiormult = v[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        v2[i] = (v[i] * maiormult);
    }


    for (i = 0; i < 5; i++)
    {
        printf("\nValor da Posicao %d: %d", i, v2[i]);
    }
}