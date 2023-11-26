#include <stdio.h>


void main()
{
    int w = 0;
    int cont = 0;

    while (w == 0)
    {
        int esc;
        printf("\n[0] Novo dado");
        printf("\n[1] Listar dados");
        printf("\n[2] Sair");
        printf("\nEscolha: ");

        scanf("%d", &esc);

        struct data
        {
            char nome[80];
            int tel;
        };


        struct data dt[10];

        switch (esc)
        {

            case 0:

                if (cont < 10)
                {

                    printf("\nDigite o Nome: ");
                    scanf(" %s", dt[cont].nome);

                    printf("\nDigite o Numero de Telefone: ");
                    scanf(" %d", &dt[cont].tel);
                    cont++;


                }
                else
                {
                    printf("Capacidade Maxima de Ususarios Atingida!");
                }

                break;

            case 1:

                for (int i = 0; i < cont; ++i)
                {
                    printf("\n\n\nNome: %s", dt[i].nome);
                    printf("\nNumero de Telefone: %d", dt[i].tel);
                }
                break;

            case 2:

                w = 1;
                break;

        }

    }

}