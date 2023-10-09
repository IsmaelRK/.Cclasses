#include <stdio.h>

void nota(float a, float b, float c, char tp, float *p)
{

    if (tp == 'A')
    {
        float sum = a + b + c;

        *p = sum/3;
    }
    else
    {
        float sum = a + b + c;
        float pnd;

        pnd = (a * 5.3) + (b * 2.0) + (c * 2.0) / sum;

        *p = pnd;
    }

}

int main()
{

    float a, b, c;
    float sum;
    char tp;



    printf("\nDigite uma Nota: ");
    scanf("%f", &a);

    printf("\nDigite uma Nota: ");
    scanf("%f", &b);

    printf("\nDigite uma Nota: ");
    scanf("%f", &c);

    printf("Digite o Tipo Desejado: ");
    scanf(" %c", &tp);


    nota(a, b, c, tp, &sum);
    printf("%.2f", sum);


    return 0;
}