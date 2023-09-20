#include <stdio.h>
#include <string.h>

main()
{

    char s[30], s2[30];
    char *p, *p2;

    p = &s;
    p2 = &s2;

    printf("\nDigite a str: ");
    scanf("%s", p);
    printf("\nDigite a str: ");
    scanf("%s", p2);

    if (!(strcmp(p, p2)))
    {

        printf("Iguais");

    }
    else
    {
        printf("Diferentes");
    }

}