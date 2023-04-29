#include <stdio.h>

main(){
    float price, cash, divs;

    printf("Digite o preço da gasolina: ");
    scanf("%f", &price);

    printf("Digite o valor de pagamento: ");
    scanf("%f", &cash);

    divs = cash / price;
    printf("%f", divs);

}
