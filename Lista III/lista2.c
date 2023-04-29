#include <stdio.h>

int main(){
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);

    float x = valor/100 * 91;
    printf("%f", x);
}