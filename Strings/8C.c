#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main()
{

    char string[20];
    char caracter[2];
    printf("\n");
    printf("\n Substituindo os Caracteres da string \n");
    printf("---------------\n");
    printf("Digite a string: ");
    scanf("%s", string);
    printf("\n");
    printf("Caractere: ");
    scanf("%s", caracter);
    printf("\n");
    printf("Substituindo ==> %s", strset(string, caracter[0]));

}