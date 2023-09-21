#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){


    float tot = 0;
    char cod, prod[15], conf = 'y';
    int qtd;


    while (conf != 'x')
    {

        printf("\n[COD - Produto - R$]");
        printf("\n\n[H - Hamburguer - R$ 5,00]");
        printf("\n[C - Cheeseburguer - R$ 6,00]");
        printf("\n[M - Misto-quente - R$ 4,00]");
        printf("\n[A - Americano - R$ 8,00]");
        printf("\n[Q - Queijo-prato - R$ 7,00]\n\n");


        printf("\nDigite o Codigo do Produto Desejado: ");
        scanf(" %c", &cod);


        printf("\nDigite a Quantidade: ");
        scanf("%d", &qtd);



        switch(cod){

            case 'H':
                tot += (qtd * 5);
                break;

            case 'C':
                tot += (qtd * 6);
                break;

            case 'M':
                tot += (qtd * 4);
                break;

            case 'A':
                tot += (qtd * 8);
                break;

            case 'Q':
                tot += (qtd * 7);
                break;

        }

        printf("Deseja Algo Mais? [y (sim)] / [x (nao)] ");
        scanf(" %c", &conf);

        if ((conf == 'x'))
        {
            conf = 'x';
            printf("\n\nTotal: R$ %.2f", tot);
        }

    }

}