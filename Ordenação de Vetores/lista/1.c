#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{

    int v[11] = {4, 5, 3, 3, 3, 5, 7, 7, 7, 7, 7};
    int aux;

    for (int i = 0; i < 11; i++)
    {

        for (int j = i + 1; j < 11; j++)
        {

            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                

            }

        }


    }


    for (int i = 0; i < 11; i++)
    {
        printf("\nVetor: %d", v[i]);   
    }


}