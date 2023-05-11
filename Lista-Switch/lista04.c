#include <stdio.h>

main(){

    int charge, perc;
    float cash, mcash, ncash;

    printf("\nTécnicos [1]");
    printf("\nGerente [2]");
    printf("\nOutros [3]");

    printf("\nSalário Atual: R$");
    scanf("%f", &cash);

    printf("\nSalário a Categoria: ");
    scanf("%d", &charge);


    switch(charge){

        case 1:
            perc = 50;
            break;

        case 2:
            perc = 30;
            break;

        case 3:
            perc = 20;
            break;
    }

    mcash = (cash/100) * perc;
    ncash = cash + mcash;

    printf("Seu novo Salário é: R$ %.2f", ncash);

}
