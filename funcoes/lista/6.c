#include <stdio.h>
#include <math.h>

int hip(int c1, int c2)
{
    int h;

    h = sqrt((pow(c1, 2) + pow(c2, 2)));

    return h;
}

main()
{
    int a, b;

    printf("Digite o cateto a: ");
    scanf("%d", &a);

    printf("Digite o cateto b: ");
    scanf("%d", &b);

    int res = hip(a, b);
    printf("O valor da Hipotenusa eh: %d", res);

}