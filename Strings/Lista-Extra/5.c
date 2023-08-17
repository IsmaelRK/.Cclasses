#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    char nm[5][20], qst = 'y', nmp[20];
    int i = 0, cont = 0, brk = 0;

    while (qst == 'y')
    {
        if (i > 4){printf("Sobreescrevendo Lista"); i = 0;}

        printf("\nDigite um Nome: ");
        scanf("%s", nm[i]);
        i++;

        printf("\nDeseja inserir mais nome na lista? [y/n]: ");
        scanf(" %c", &qst);
    }

    printf("Digite o Nome a Procurar: ");
    scanf("%s", nmp);

    for (i = 0; i < strlen(nm[i]); i++)
    {
        for (int j = 0; j < strlen(nmp); j++)
        {

            if (brk == 1)
            {
                break;
            }
            if (nmp == nm[i])
            {
                printf("Nome Encontrado: %s", nm[i]);
                brk = 1;
            }
            else if (nmp[j] == nm[i][j])
            {
                cont++;
                if (cont >= 3)
                {
                    printf("Nome Encontrado: %s", nm[i]);
                    brk = 1;
                }
            }
        }
    }
    if (brk == 0)
    {
        printf("Nome Nao Encontrado!");
    }
}