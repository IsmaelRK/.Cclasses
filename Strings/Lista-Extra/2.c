#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

main(){

    char s[40], c;

    printf("Digite a String: ");
    gets(s);

    printf("Digite o Caracter: ");
    scanf(" %c", &c);


    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == c)
        {
            printf("Caracter Encontrado na Posicao: [%d]", i+1);
            break;
        }
    }

}