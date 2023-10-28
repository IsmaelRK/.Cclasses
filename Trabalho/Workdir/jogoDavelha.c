#include <stdio.h>

void main()
{
    char velha[3][3];
    int l, c, winner = 0, arg = 0;
    int tent = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            velha[i][j] = ' ';
        }
    }


    while (winner == 0)
    {
        if(tent > 8)
        {
            printf("Empate\n");
            break;
        }


        printf("\n");
        printf("\n");
        tent++;

        printf("  0    1    2\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {

                if (j == 1)
                {
                    printf("| %c |", velha[i][j]);
                }
                else
                {
                    printf("  %c  ", velha[i][j]);
                }


            }
            printf("  %d", i);
            printf("\n");
        }


        printf("\n");
        printf("\n");


        printf("\nDigite a linha:");
        scanf("%d", &l);

        printf("\nDigite a coluna:");
        scanf("%d", &c);


        if (arg % 2 == 0)
        {
            if (velha[l][c] != 'X' && velha[l][c] != 'O')
            {
                velha[l][c] = 'X';
            }
            else
            {
                tent--;
                arg--;
            }


        }
        else
        {
            if (velha[l][c] != 'X' && velha[l][c] != 'O')
            {
                velha[l][c] = 'O';
            }
            else
            {
                tent--;
                arg--;
            }

        }


        for (int i = 0; i < 3; i++)
        {
            int j = 0;

            if (velha[i][j] == velha[i][j+1] && velha[i][j] == velha[i][j+2] && velha[i][j] != ' ')
            {
                if (velha[i][j] == 'X')
                {
                    winner = 1;
                    printf("X Ganhou\n");
                    break;
                }
                else
                {
                    winner = 2;
                    printf("O Ganhou\n");
                    break;
                }

            }

        }

        for (int j = 0; j < 3; j++)
        {
            int i = 0;

            if (velha[i][j] == velha[i+1][j] && velha[i][j] == velha[i+2][j] && velha[i][j] != ' ')
            {
                if (velha[i][j] == 'X' && velha[i][j] != ' ')
                {
                    winner = 1;
                    printf("X Ganhou\n");
                    break;
                }
                else if (velha[i][j] == 'O' && velha[i][j] != ' ')
                {
                    winner = 2;
                    printf("O Ganhou\n");
                    break;
                }

            }

        }

        int cont = 0;
        int cont2 = 0;
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                if (i == j)
                {

                    if (velha[i][j] == 'X' && velha[i][j] != ' ')
                    {
                        cont++;
                    }
                    else if (velha[i][j] == 'O' && velha[i][j] != ' ')
                    {
                        cont2++;
                    }


                }


            }

        }

        if (cont == 3)
        {
            winner = 1;
            printf("X Ganhou\n");
            break;
        }
        if (cont2 == 3)
        {
            winner = 2;
            printf("O Ganhou\n");
            break;
        }


        cont = 0;
        cont2 = 0;
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                if (j == 2 - i)
                {

                    if (velha[i][j] == 'X' && velha[i][j] != ' ')
                    {
                        cont++;
                    }
                    else if (velha[i][j] == 'O' && velha[i][j] != ' ')
                    {
                        cont2++;
                    }


                }


            }

        }

        if (cont == 3)
        {
            winner = 1;
            printf("X Ganhou\n");
            break;
        }
        if (cont2 == 3)
        {
            winner = 2;
            printf("O Ganhou\n");
            break;
        }



        arg++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("| %c |", velha[i][j]);
        }
        printf("\n");
    }

}