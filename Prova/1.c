#include <stdio.h>


float arit(float n1, float n2, float n3)
{
    float med;
    med = (n1 + n2 + n3) / 3;
    return med;
}

float pond(float n1, float n2, float n3)
{
    float med = (n1 * 5 + n2 * 3 + n3 * 2) / (5 + 3 + 2);
    return med;
}

void main()
{

    char l;
    float n1;
    float n2;
    float n3;
    float med;


    printf("Digite a Letra: ");
    scanf(" %c", &l);

    printf("Digite a Nota 1: ");
    scanf("%f", &n1);

    printf("Digite a Nota 2: ");
    scanf("%f", &n2);

    printf("Digite a Nota 3: ");
    scanf("%f", &n3);



    if (l == 'A')
    {
        float tot = arit(n1, n2, n3);
        printf("Media = %.2f", tot);
    }

    else if (l == 'P')
    {
        float tot = pond(n1, n2, n3);
        printf("Media = %.2f", tot);
    }


}