#include <stdio.h>
#include <math.h>

void mth(float *p, float *p2)
{
    float j;
    float r = *p;


    j = floor(r);
    r = r - j;

    printf("%.0f", j);
    printf("\n%.2f", r);

    *p = j;
    *p2 = r;

}

int main()
{
    float v, h;
    printf("Digite um Numero: ");
    scanf("%f", &v);

    mth(&v, &h);

    printf("\n\n%.2f", v);
    printf("\n%.2f", h);

    return 0;
}
