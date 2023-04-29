#include <stdio.h>

int main(){
    int naula;
    float vhora, desconto;
    float x, y, z;

    printf("Digite o valor da hora: ");
    scanf("%f", &vhora);

    printf("Digite o Nº de aulas de dadas: ");
    scanf("%d", &naula);

    printf("Digite o desconto, com casa decimal se preciso: ");
    scanf("%f", &desconto);

    x = vhora * naula / 100;
    y = 100 - desconto;
    z = x * y;

    printf("Seu salário liquido é:\n");
    printf("%f", z);
}