#include <stdio.h>

void main()
{
    char modelo[5][15];
    float kmp_l[5];
    float l_1000km[5];


    for (int i = 0; i < 5; i++)
    {
        printf("Digite o Modelo: ");
        scanf(" %s", modelo[i]);

        printf("Digite os KM/L: ");
        scanf("%f", &kmp_l[i]);

        l_1000km[i] = 1000/kmp_l[i];

    }


    int econ = 0;
    float lit = 0;
    for (int i = 0; i < 5; i++)
    {

        if (kmp_l[i] > lit)
        {
            lit = kmp_l[i];
            econ = i;
        }

    }


    for (int i = 0; i < 5; i++)
    {
        printf("\nModelo: %s", modelo[i]);
        printf("\nKm/l: %.2f", kmp_l[i]);
        printf("\nLitros gastos para 1000KM: %.2f", l_1000km[i]);
    }

    printf("\nO Mais Economico eh: %s", modelo[econ]);


}