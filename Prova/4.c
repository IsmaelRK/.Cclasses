#include <stdio.h>
#include <string.h>

void main()
{

    char str[20];
    char conc_str[80];

    for (int i = 0; i < 4; i++)
    {
        printf("Digite uma Plavra: ");
        scanf(" %s", str);

        strcat(conc_str, str);
    }

    printf("String concatenada: %s", conc_str);

}