#include <stdio.h>

main()
{
    int m[10][10], *p;

    p = m[0];

    for (int i = 0; i < 100; i++)
    {

        *p = 0;
        p++;

    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
            

    }

}