#include <stdio.h>
#include <conio.h>

main(){

    int day;
    float km, value;


    printf("Digite a Quantidade de Dias: ");
    scanf("%d", &day);

    printf("Digite a Quantidade de KMs: ");
    scanf("%f", &km);


    value = (90 * day) + (0.20 * km);
    printf("Valor a Pagar: %.2f", value);
    getche();
}