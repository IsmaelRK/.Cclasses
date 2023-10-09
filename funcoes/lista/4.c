#include <stdio.h>
#include <ctype.h>
#include <string.h>

int strvls (char *str)
{
    int upr = 0, lwr = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            upr++;
        }
        else if (islower(str[i]))
        {
            lwr++;
        }
    }

    int tot = upr + lwr;
    int lst[3] = {upr, lwr, tot};




    return upr, lwr, tot;
}

int main()
{
    char string[50];
    int vls[3];
    int a, b, c;

    printf("Digite uma str: ");
    scanf("%s", string);

    a, b, c = strvls(string);
    printf("%d", res);

}