#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{

    char nomes[9][20] = {"Jair", "Valdir", "Carlos", "Jorge", "Bia", "Ana", "Zelia", "Manoel", "Carla"};
    char aux[20];

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {

            if (strlen(nomes[i]) > strlen(nomes[j]))
            {

                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);

            }

        }
    }


    for (int i = 0; i < 9; i++)
    {
        printf("\nNome: %s", nomes[i]);
    }

}