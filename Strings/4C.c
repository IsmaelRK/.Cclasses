#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


main()
{

    char str1[100], str2[100], str3[100];
    printf("Entre com uma string: ");

    gets(str1);
    gets(str2);

    strcat(str1, str2);
    printf("\n\n%s", str1);
    puts("\n");
    system("Pause");

}