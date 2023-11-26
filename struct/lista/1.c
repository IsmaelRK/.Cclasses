#include <stdio.h>

void main()
{

    struct users
    {
        char nome[70];
        char rua[80];
        int num;
        int andar;

    };

    struct users dados[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite seu Nome: ");
        scanf("%s", dados[i].nome);


        printf("\nDigite sua Rua: ");
        scanf("%s", dados[i].rua);


        printf("\nDigite o Numeros: ");
        scanf("%d", &dados[i].num);


        printf("\nDigite o Andar: ");
        scanf("%d", &dados[i].andar);

    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nUsuário %d", i);
        printf("\nNome: %s", dados[i].nome);
        printf("\nRua: %s", dados[i].rua);
        printf("\nNumero: %d", dados[i].num);
        printf("\nAndar: %d", dados[i].andar);
    }

}