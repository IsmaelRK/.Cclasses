#include <stdio.h>

main(){

    int qtd, i, i2, i3, cont=0, contado = 0;

    printf("Digite a Quantidade: ");
    scanf("%d", &qtd);

    int v[qtd], v2[qtd];

    for (i = 0; i < qtd; i++){
        printf("Digite um Numero: ");
        scanf("%d", &v[i]);
    }

    for (i = 0; i < qtd; i++){
        cont = 0;
        for (i2 = 0; i2 < qtd; i2++)
        {
            if(v[i] == v[i2]){
                cont++;
            }
        }


        for (i2 = 0; i2 < qtd; i2++)
        {
            if(v2[i2] == v[i]){
                contado = 1;
            }
        }

        if (contado == 0){

            printf("\n%d ocorre %d vezes", v[i], cont);
            v2[i] = v[i];

        }
        contado = 0;

    }

}