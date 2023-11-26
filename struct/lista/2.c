#include <stdio.h>

void main()
{
    struct data
    {
        int num;
        char nome[80];
        float nota;
        float nota2;
    };

    int n = 0;
    printf("Insira o Numero de Alunos: ");
    scanf("%d", &n);

    struct data dt[n];

    for (int i = 0; i < n; i++)
    {

        printf("Numero: ");
        scanf(" %d", &dt[i].num);

        printf("Nome: ");
        scanf(" %s", dt[i].nome);


        printf("Nota 1: ");
        scanf(" %f", &dt[i].nota);

        printf("Nota 2: ");
        scanf(" %f", &dt[i].nota2);

    }


    for (int i = 0; i < n; i++)
    {

        printf("\n########################\n\n\nNumero: %d", dt[i].num);
        printf("\nNome: %s", dt[i].nome);
        printf("\nNota 1: %.2f", dt[i].nota);
        printf("\nNota 2: %.2f", dt[i].nota2);

        float med = (dt[i].nota + dt[i].nota2) / 2;

        printf("\nMedia: %.2f", med);


    }





}