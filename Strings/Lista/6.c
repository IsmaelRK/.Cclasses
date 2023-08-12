#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){

    char p1[30], p2[30];

    printf("Digite uma Palavra: ");
    gets(p1);

    printf("Digite Outra Palavra: ");
    gets(p2);


    

    if (!(strcmp(p1, p2))){
        printf("Sao Iguais");
    }
    else if ((strcmp(p1, p2))){
        printf("Sao Diferentes");

        if (strlen(p1) > strlen(p2))
        {
            printf("\nA Primeira eh Maior");
        }
        else if (strlen(p1) < strlen(p2))
        {
            printf("\nA Segunda eh Maior");
        }
        else
        {
            printf("\nPossuem o Mesmo Tamanho");
        }


    }
}