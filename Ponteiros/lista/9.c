#include <stdio.h>
#include <ctype.h>
#include <string.h>

main()
{

    char nome[50];
    char nome2[50];
    int upr = 0, lwr = 0, vog = 0, con = 0; 

    printf("Digite a str: ");
    scanf("%s", nome);

    strcpy(nome2, nome);
    strlwr(nome2);


    for (int i = 0; i < strlen(nome); i++)
    {

        if (isupper(nome[i]))
        {
            upr++;
        }
        else
        {
            lwr++;
        }


        if (nome2[i] == 'a' || nome2[i] == 'e' || nome2[i] == 'i' || nome2[i] == 'o' || nome2[i] == 'u')
        {
            vog++;
        }
        else
        {
            con++;
        }

    }


    printf("\nMaiusculas: %d", upr);
    printf("\nMinusculas: %d", lwr);
    printf("\nVogais: %d", vog);
    printf("\nConsoantes: %d", con);
}