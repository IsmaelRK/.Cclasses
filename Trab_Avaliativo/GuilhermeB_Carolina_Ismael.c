#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{

    int m[1][2], m2[1][2], m3[1][2], m4[1][2], i, j;
    int disp, pacote, esc, estado, esc2, tipo;
    char escolha = 's';




    do
    {

        printf("\nMenu: ");
        printf("\n[0] Cliente");
        printf("\n[1] Editora");
        printf("\n\nDigite a Opcao: ");
        scanf("%d", &esc);
        
        switch (esc)
        {
    
        case 0:

            
            printf ("Insira o codigo vinculado a editora: ");
            scanf ("%0d", &estado);


            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    if (estado == m[i][j])
                    {
                        printf("Quantidade disponivel para o estado: %02d", m[i][1]);
                    }
                }
            }



            printf ("\nInsira a quantidade de pacotes que deseja: ");
            scanf ("%d", &pacote);


            printf("\nMenu: ");
            printf("\n[0] Imprimir Tudo");
            printf("\n[1] Imprimir Totais Para um Tipo Mensalmente");
            printf("\n[2] Imprimir Totais Para Todos os Tipos Mensalmente");
            printf("\n\nDigite a Opcao: ");
            scanf("%d", &esc2);

            switch (esc2)
            {
                case 0:

                    printf("Todos os Tipos Mensal");
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            printf("%d", m2[i][j]);
                        }
                        printf("\n");
                    }

                    printf("Ficcao Mensal");

                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            printf("%d", m3[i][j]);
                        }
                        printf("\n");
                    }

                    printf("Nao Ficcao Mensal");

                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            printf("%d", m4[i][j]);
                        }
                        printf("\n");
                    }


                    break;

                case 1:

                    printf("Ficcao Mensal");

                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            printf("%d", m3[i][j]);
                        }
                        printf("\n");
                    }

                    printf("Nao Ficcao Mensal");

                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            printf("%d", m4[i][j]);
                        }
                        printf("\n");
                    }

                    break;

                case 2:

                    printf("Todos os Tipos Mensal");
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            printf("%d", m2[i][j]);
                        }
                        printf("\n");
                    }
                    break;
            } 



            break;

        case 1:


            for (i = 0; i < 1; i++)
            {    
                m[i][0] = i;
            }


            for (i = 0; i < 1; i++)
            {
                for (j = 1; j < 2; j++)
                {
                    
                    printf ("Insira a quantidade de pacotes disponiveis para o estado de codigo %d: ", m[i][0]);
                    scanf ("%d", &m[i][1]);
                }
            }

            for (i = 0; i < 1; i++)
            {
                m2[i][0] = m[i][0];
                for (j = 0; j < 2; j++)
                {
                    
                    printf ("Insira a quantidade de pacotes disponiveis para o estado de codigo %d no mes %d: ", m2[i][0], j);
                    scanf ("%d", &m[i][1]);

                    printf("\nEscolha o Tipo [0] Ficcao | [1] Nao-Ficcao: ");
                    scanf("%d", &tipo);

                    if (tipo == 0)
                    {
                        printf ("Insira a quantidade mensal de livros de ficcao: ");
                        scanf ("%d", &m3[i][j]); 
                    }
                    if (tipo == 1)
                    {
                        printf ("Insira a quantidade mensal de livros de nao ficcao: ");
                        scanf ("%d", &m4[i][j]); 
                    }


                }
            }

            break;
    }
    printf("\nDeseja Continuar? [s/n]: ");
    scanf("\n%c", &escolha);

    } while (escolha == 's');
    {
        printf("FINALIZADO!");
    }









    


}