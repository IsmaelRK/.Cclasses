# include <stdio.h>


int quadrante(int a, int b)
{
    if (a > 0 & b > 0)
    {
        return 1;
    }
    else if (a < 0 & b > 0)
    {
        return 2;
    }
    else if (a < 0 & b < 0)
    {
        return 3;
    }
    else if (a > 0 & b < 0)
    {
        return 4;
    }

}

int main()
{
    int num, num2;

    printf("Digite um Numero X: ");
    scanf("%d", &num);

    printf("Digite um Numero Y: ");
    scanf("%d", &num2);

    int qdr = quadrante(num, num2);
    printf("Quadrante: %d", qdr);
    return 0;
}