#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <conio.h>


main()
{

    char nomes[5][30] = {"Jair", "Valdir", "Carlos", "Jorge", "Bia"};
    char src[30];
    int vrf = 1;


    printf("Digite um nome: ");
    gets(src);
    puts(src);

    strupr(src);

    for(int i = 0; i < 5; i++)
    {
        strupr(nomes[i]);

        if (!(strcmp(src, nomes[i])))
        {
            printf("Nome encontrado na posicao %d", i);
            vrf = 0;
        }

    }

    if (vrf == 1)
    {
        printf("Nome nao encontrado");
    }



}