#include <stdio.h>

main()
{


    int v[10], *p, var = 0;
    float v2[10], *p2, var2 = 0.0;


    p = &v[0];
    p2 = &v2[0];
    

    for (int i = 0; i < 10; i++)
    {        
        p[i] = var;
        var++;
    }

    for (int i = 0; i < 10; i++)
    {        
        p2[i] = var2;
        var2++;
    }

    for (int i = 0; i < 10; i++)
    {

        printf("\tint: %d", p[i]);
        printf("\tfloat: %.2f", p2[i]);
        printf("\n");
    }
}