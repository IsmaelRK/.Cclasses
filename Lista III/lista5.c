#include <stdio.h>
#include <locale.h>

int main(){

    float cash, x, y, z, a;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite seu Salário: ");
    scanf("%f", &cash);

    x = cash / 100;
    y = x * 115;

    z = y / 100;
    a = z * 92;

    printf("Valor Bruto: %f", y);
    printf("\n");
    printf("Valor Liquido: %f", a);
}