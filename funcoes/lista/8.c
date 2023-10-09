#include <stdio.h>
#include <string.h>

int vogal(char *str)
{
    int qtd = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            qtd++;
        }
    }

    return qtd;
}


int main()
{
    char str[20];

    printf("Digite o Nome: ");
    scanf("%s", str);
    strlwr(str);


    int res = vogal(str);
    printf("%d", res);

    return 0;
}