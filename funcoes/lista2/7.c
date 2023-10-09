#include <stdio.h>

int car(char *v, int ind, char spc)
{

    int n = 0;

    for (int i = 0; i < ind; i++)
    {
        if (v[i] == spc)
        {
            v[i] = '*';
            n++;
        }

    }
    return n;
}


main()
{
    char v[3], spc;
    int i;


    for (i = 0; i < 3; i++)
    {

        printf("Digite um char: ");
        scanf(" %c", &v[i]);
    }

    printf("Digite um char: ");
    scanf(" %c", &spc);

    int res = car(&v[0], i, spc);

    printf("\n\n%d", res);

    for (i = 0; i < 3; i++)
    {

        printf("\nchar: %c", v[i]);

    }

}