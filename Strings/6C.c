#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


main()
{

    char str1[100], str2[100];
    printf("Entre com uma string: ");
    gets(str1);
    
    printf("Entre com uma string: ");
    gets(str2);


    if(strcmp(str1, str2) == 0){
        printf("\n As duas strings são iguais");
    }
    else{
        printf("\n As duas strings são diferentes");
    }

    puts("\n");
    system("Pause");

}

// PG 16 < com < e > com >