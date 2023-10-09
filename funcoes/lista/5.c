#include <stdio.h>

int prt(char v)
{
    if (v == 's')
    {
        for(int i = 0; i < 10; i++)
        {
            printf("\n%d", i);
        }
    }
    else
    {
        printf("Finalizado");
    }
}

main()
{
    char vl;

    printf("Deseja imprimir? [s/n]: ");
    scanf("%c", &vl);

    prt(vl);
}