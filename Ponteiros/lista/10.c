#include <stdio.h>
#include <string.h>

main()
{

    char *p, str[30];

    p = &str;

    printf("Insira a STR: ");
    scanf("%s", p);
    strrev(p);

    printf("%s", p);
}