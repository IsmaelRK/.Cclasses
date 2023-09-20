#include <stdio.h>
#include <string.h>

main()
{

    char v[3], *p;
    char trs;

    p = &v[0];

    
    for(int i = 0; i < 3; i++)
    {
        printf("\nDigite a str: ");
        scanf(" %c", p);
        p++;

    }

    p = &v[0];

    for(int i = 0; i < 3; i++)
    {
        for(int j = i+1; j < 3; j++)
        {

            if (p[i] > p[j])
            {

                trs = p[i];
                p[i] = p[j];
                p[j] = trs;

            }

        }


    }

    for(int i = 0; i < 3; i++)
    {

        printf("%c", *p);
        p++;

    }
}