#include <stdio.h>
#include <math.h>

float soma(float n, float n2);
float sub(float n, float n2);
float div(float n, float n2);
float mult(float n, float n2);
float expo(float n, float n2);
float med(float n, float n2);


int main(){

    float num, num2;
    int opc, i = 1;

    printf("\n[%d] Soma", i++);
    printf("\n[%d] Subtracao", i++);
    printf("\n[%d] Divisao", i++);
    printf("\n[%d] Multiplicacao", i++);
    printf("\n[%d] exponenciacao", i++);
    printf("\n[%d] Media", i++);
    i = 1;


    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opc);
    
    printf("\nDigite um Numero: ");
    scanf("%f", &num);

    printf("\nDigite um Numero: ");
    scanf("%f", &num2);

    float res;
    switch (opc)
    {
        case 1:
          res = soma(num, num2);
          break;

        case 2:
            res = sub(num, num2);
            break;

        case 3:
            res = div(num, num2);
            break;
        case 4:
            res = mult(num, num2);
            break;
        case 5:
            res = expo(num, num2);
            break;
        case 6:
            res = med(num, num2);
            break;
    }
    printf("Resultado: %.2f", res);



}

float soma(float n, float n2)
{
    float r;
    r = n + n2;
    return r;

}

float sub(float n, float n2)
{
    float r;
    r = n - n2;
    return r;
}
float div(float n, float n2)
{
    float r;
    r = n / n2;
    return r;
}
float mult(float n, float n2)
{
    float r;
    r = n * n2;
    return r;
}
float expo(float n, float n2)
{
    float r;
    r = pow(n, n2);
    return r;
}
float med(float n, float n2)
{
    float r;
    r = (n + n2) / 2;
    return r;
}