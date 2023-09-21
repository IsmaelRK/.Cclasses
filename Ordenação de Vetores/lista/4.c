#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


main()
{


    char str[10], str2[10], aux;



    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o caracter: ");
        scanf(" %c", &str[i]);
        str2[i] = str[i];
    }


    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {

            if (str2[j] < str2[i])  // chars = number
            {
                aux = str2[i];
                str2[i] = str2[j];
                str2[j] = aux;
            }

        }
    }


    printf("\n\n\n NOVA: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nNova: %c", str2[i]);
    }


    printf("\n\n\n Antiga: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nAntiga: %c", str[i]);
    }



}
