#include <stdio.h>

main()
{
    char name;
    int qtd;
    float price, ajprice, desc, totprice;


    printf("Digite o Nome: ");
    scanf("%c", &name);

    printf("Digite a Quantidade: ");
    scanf("%d", &qtd);

    printf("Digite o Preço: ");
    scanf("%f", &price);

    totprice = price * qtd;

    if (qtd <= 5){
        ajprice = (totprice/100) * 98;
    }

    if (qtd > 5 && qtd <= 10){
        ajprice = (totprice/100) * 97;
    }

    if (qtd > 10 && qtd < 20){
        ajprice = ((totprice/100) * 95);

    }

    desc = totprice - ajprice;
    printf("\nTotal sem Descontos: %.2f", totprice);
    printf("\nTotal com Descontos: %.2f", ajprice);
    printf("\nDesconto Total: %.2f", desc);
}
