#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


main()
{

    char str1[100];
    int tamanho;
    printf("Entre com uma string: ");

    gets(str1);
    tamanho = strlen(str1);

    printf("\n\nA string digitada tem tamanho: %d", tamanho);
    puts("\n");
    system("Pause");

}