#include <stdio.h>
#include <locale.h>

main(){

    setlocale(LC_ALL, "portuguese");
    int op;

    printf("\nVelocidade Maior que 80Km/h [1]");
    printf("\nVelocidade Maior que 60Km/h [2]");
    printf("\nVelocidade Menor ou Igual 60Km/h [3]");


    printf("\nDigite a Opção Desejada: ");
    scanf("%d", &op);

    switch(op){

        case 1 :
            printf("\nA multa é de R$360");
            break;
        case 2 :
            printf("\nA multa é de R$180");
            break;
        case 3 :
            printf("\nNão há multa");
            break;
        default:
            printf("\nInválido");

    }

}
