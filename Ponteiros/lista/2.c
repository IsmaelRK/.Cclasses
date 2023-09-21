#include <stdio.h>

main()
{

    int *p, *q, n = 1, n2 = -5;

    p = &n;
    q = &n2;

    if (&p > &q)
    {
        printf("%d", p-q);
    }
    else
    {
        printf("%d", q-p);
    }


}