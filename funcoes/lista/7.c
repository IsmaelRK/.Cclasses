#include <stdio.h>

int verifica(int n)
{
    if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

main()
{
    int div;

    printf("Digite um Numero: ");
    scanf("%d", &div);

    int res = verifica(div);
    printf("%d", res);
}
