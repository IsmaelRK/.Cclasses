#include <stdio.h>

main(){

    char name;
    float value;
    int cont = 0, offer;

    while(cont < 15)
    {
        printf("Nome: ");
        scanf(" %c", &name);

        printf("Valor das Compras: R$ ");
        scanf(" %f", &value);


        if (value < 1000){
            offer = 10;
        }
        else{
            offer = 15;
        }

        printf("Nome do Cliente: %c\n", name);
        printf("Valor Gasto em Compras: R$%.2f\n", value);
        printf("Bônus: %d\n", offer);
        cont++;

    }

}