#include <stdio.h>

main()
{

    int var, *p, **q;

    var = 50;

    p = &var;
    q = &p;
    printf("%d", **q);
}