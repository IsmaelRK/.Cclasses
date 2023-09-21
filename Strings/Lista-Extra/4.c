#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    char str[30], chr;
    int qA = 0, qE = 0, qI = 0, qO = 0, qU = 0;

    printf("Digite uma String: ");
    gets(str);
    strlwr(str);


    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            qA++;
        }
        else if (str[i] == 'e')
        {
            qE++;
        }
        else if (str[i] == 'i')
        {
            qI++;
        }

        else if (str[i] == 'o')
        {
            qO++;
        }
        else if (str[i] == 'u')
        {
            qU++;
        }
    }

    printf("\nPossui 'A' [%dx]", qA);
    printf("\nPossui 'E' [%dx]", qE);
    printf("\nPossui 'i' [%dx]", qI);
    printf("\nPossui 'O' [%dx]", qO);
    printf("\nPossui 'U' [%dx]", qU);

    printf("\n\n\nDigite uma Letra: ");
    scanf(" %c", &chr);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = chr;
        }
    }

    puts(str);
}