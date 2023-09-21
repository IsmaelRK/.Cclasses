#include <stdio.h>

main(){

int cont=0;
int cod;
float price, aumento, tot;

while(cont < 150){

    printf("\nDigite o Código: ");
    scanf("%d", &cod);

    printf("\nDigite o Preço de Custo: R$ ");
    scanf("%f", &price);

    aumento = (price/100) * 20;
    tot = aumento + price;

    printf("\nCódigo: %d", cod);
    printf("\nPreço de Venda: R$ %.2f", tot);
}

}