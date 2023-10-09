#include <stdio.h>

int calc(float *b, float *h, float *r)
{

    for(int i = 0; i < 2; i++)
    {
        r[i] = b[i] * h[i];
    }

    if (r[0] == r[1])
    {
        printf("Iguais");
    }
    else if (r[0] > r[1])
    {
        printf("Primeiro > Segundo");
    }
    else if (r[1] > r[0])
    {
        printf("Segudo > Primeiro");
    }

}


main()
{
    float b[2], h[2];
    float res[2];

    for (int i = 0; i < 2; i++)
    {

        printf("Digite a Base: ");
        scanf("%f", &b[i]);

        printf("Digite a Altura: ");
        scanf("%f", &h[i]);

    }


    calc(&b[0], &h[0], &res[0]);

    printf("\nArea do Primeiro: %.2f", res[0]);
    printf("\nArea do Segundo: %.2f", res[1]);

}