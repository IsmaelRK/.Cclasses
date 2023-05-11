#include <stdio.h>

main(){

    float price, nprice, tot;
    int perc, opc;

    printf("\nDigite o Preço: ");
    scanf("%f", &price);

    if (price <= 50){
        perc = 5;

    }

    if (price > 50 && price <= 100){
        perc = 10;

    }

    if (price > 100){
        perc = 15;

    }

    nprice = (price/100) * perc;


    printf("\nAté R$80 [1]");
    printf("\nEntre R$80 e R$120 [2]");
    printf("\nEntre R$120 e R$200 [3]");
    printf("\nAcima de R$200 [4]");

    printf("\nDigide a Opção: ");
    scanf("%d", &opc);


    switch(opc){

        case 1:
            printf("Barato");
            break;
        case 2:
            printf("Normal");
            break;
        case 3:
            printf("Caro");
            break;
        case 4:
            printf("Muito Caro");
            break;

        default:
            printf("Inválido");

    }


    tot = price + nprice;
    printf("\n R$%.2f", tot);

}