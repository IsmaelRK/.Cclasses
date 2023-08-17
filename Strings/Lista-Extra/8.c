#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    char str[20];
    int cnt = 1;

    printf("Digite uma Palavra: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        for(int j = 0; j < cnt; j++)
        {

            printf("%s ", str);

        }
        printf("\n");

        cnt++;

    }

}