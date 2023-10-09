#include <stdio.h>

int soma(int n, int n2);

int main()
{
    int num, num2;

    printf("Digite um Numero: ");
    scanf("%d", &num);

    printf("Digite outro Numero: ");
    scanf("%d", &num2);

    int res = soma(num, num2);
    printf("Resultado da Soma: %d", res);
}

int soma (int n, int n2)
{
    int tmp = n + n2;
    return tmp;
}