#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "portuguese");

    char name;
    float price, tprice;
    int qtd;

    printf("Digite o nome do produto: ");
    scanf(" %c", &name);

    printf("Digite o preço do produto: ");
    scanf(" %f", &price);

    printf("Digite quantiadade: ");
    scanf(" %d", &qtd);


    if (qtd <= 10){tprice = qtd * price;}
    if (qtd >= 11 && qtd <= 20){tprice = qtd * ((price/100) * 90);}
    if (qtd >= 21 && qtd <= 50){tprice = qtd * ((price/100) * 80);}
    if (qtd > 50){tprice = qtd * ((price/100) * 75);}


    printf("Nome: %c \n", name);
    printf("Valor Total: %.2f", tprice);

}
