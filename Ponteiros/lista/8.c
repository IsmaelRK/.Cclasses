#include <stdio.h>
#include <string.h>

main()
{
    char s1[10], s2[10], s3[10], s4[10], s[40];

    printf("\nDigite: ");
    scanf("%s", s1);

    printf("\nDigite: ");
    scanf("%s", s2);

    printf("\nDigite: ");
    scanf("%s", s3);

    printf("\nDigite: ");
    scanf("%s", s4);

    strcpy(s, s1);
    strcat(s, s2);
    strcat(s, s3);
    strcat(s, s4);

    printf("%s", s);

}