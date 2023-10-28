#include <stdio.h>
#include <math.h>
#include <string.h>
# include <stdlib.h>
# include <time.h>


void calc_hip_cate()
{
    int opc;
    float a, b, h, calc;


    printf("\n[0] Calculo da hipotenusa");
    printf("\n[1] Calculo de cateto");


    printf("\nDigite a Opcao: ");
    scanf("%d", &opc);

    switch(opc)
    {
        case 0:

            printf("Digite o cateto A: ");
            scanf("%f", &a);

            printf("Digite o cateto B: ");
            scanf("%f", &b);

            h = pow(a, 2)  + pow(b, 2);
            h = sqrt(h);
            printf("Valor da Hipotenusa = %.2f", h);
            break;

        case 1:

            printf("Digite o cateto A: ");
            scanf("%f", &a);

            printf("Digite a Hipotenusa: ");
            scanf("%f", &h);

            b = pow(h, 2) - pow(a, 2);
            b = sqrt(b);
            printf("Valor do cateto = %.2f", b);
            break;

    }

}

void calc_fig2d()
{
    int opc;
    float a, b, h, calc;


    printf("\n[0] Calculo da area do quadrado / retangulo");
    printf("\n[1] Calculo da area do triangulo");
    printf("\n[2] Calculo da area do circulo");
    printf("\n[3] Calculo da area do trapezio");


    printf("\nDigite a Opcao: ");
    scanf("%d", &opc);

    switch(opc)
    {
        case 0:

            printf("Digita a base: ");
            scanf("%f", &a);

            printf("Digita a altura / lado: ");
            scanf("%f", &b);

            calc = b * a;
            printf("A area eh = %.2f", calc);
            break;

        case 1:

            printf("Digita a base: ");
            scanf("%f", &a);

            printf("Digita a altura: ");
            scanf("%f", &b);

            calc = (a * b) / 2;
            printf("A area eh = %.2f", calc);
            break;

        case 2:

            printf("Digita o raio: ");
            scanf("%f", &a);


            calc = M_PI * (pow(a, 2));
            printf("A area eh = %.2f", calc);
            break;

        case 3:

            printf("Digita a Base Maior: ");
            scanf("%f", &a);

            printf("Digita a base Menor: ");
            scanf("%f", &b);

            printf("Digita a Altura: ");
            scanf("%f", &h);

            calc = ((a + b) * h) / 2;
            printf("A area eh = %.2f", calc);
            break;

    }










}

void calc_fig3d()
{
    int opc;
    float a, b, c, h, calc, p;


    printf("\n[0] Calculo da area do cubo");
    printf("\n[1] Calculo da area da Piramide de base retangular");
    printf("\n[2] Calculo da area da esfera");


    printf("\nDigite a Opcao: ");
    scanf("%d", &opc);


    switch(opc)
    {
        case 0:

            printf("Digita a Aresta: ");
            scanf("%f", &a);

            calc = 6 * (pow(a, 2));
            printf("A area eh = %.2f", calc);
            break;

        case 1:

            printf("Digita o lado da base: ");
            scanf("%f", &a);

            printf("Digita o outro lado da base: ");
            scanf("%f", &c);

            printf("Digita a altura: ");
            scanf("%f", &h);

            printf("Digita o perimetro da base: ");
            scanf("%f", &p);

            calc = (a * c) + ((p * h)/2);  // (lado da base * outro lado da base) + (perimetro da base * altura da piramide) / 2
            printf("A area eh = %.2f", calc);  // area base + area lateral
            break;

        case 2:

            printf("Digita o raio: ");
            scanf("%f", &a);


            calc = (4 * M_PI) * (pow(a, 2));
            printf("A area eh = %.2f", calc);
            break;

    }

}

void calc_sin_cos_tg()
{
    int opc;
    float a, b, h, calc;

    printf("\n[0] Seno");
    printf("\n[1] Cosseno");
    printf("\n[2] Tangente");

    printf("\nDigite a opcao:");
    scanf("%d", &opc);


    switch (opc) {

        case 0:

            printf("Digite Cateto Oposto: ");
            scanf("%f", &a);

            printf("Digite Hipotenusa: ");
            scanf("%f", &b);

            calc = a / b;
            printf("Seno  = %.2f", calc);

            break;

        case 1:

            printf("Digite Cateto Adjacente: ");
            scanf("%f", &a);

            printf("Digite Hipotenusa: ");
            scanf("%f", &b);

            calc = a / b;
            printf("Cosseno  = %.2f", calc);

            break;

        case 2:

            printf("Digite Cateto Oposto: ");
            scanf("%f", &a);

            printf("Digite Cateta Adjacente: ");
            scanf("%f", &b);

            calc = a / b;
            printf("Tangente  = %.2f", calc);

            break;
    }

}

void calc_equa()
{
    double a, b, c, calc, calc2;
    double delta;

    printf("Digite o Coeficiente A: ");
    scanf("%lf", &a);

    printf("Digite o Coeficiente B: ");
    scanf("%lf", &b);

    printf("Digite o Coeficiente C: ");
    scanf("%lf", &c);

    delta = ((pow(b, 2)) - (4 * a * c));


    if (delta < 0)
    {
        printf("Sem Raizes Reais");
    } else
    {
        calc = (-b + sqrt(delta)) / (2 * a);

        calc2 = (-b - sqrt(delta)) / (2 * a);

        printf("\nX1 = %.2f", calc);
        printf("\nX2 = %.2f", calc2);
    }




}

void forms()
{

    int opc;

    printf("");
    printf("\n[0] Calculo da hipotenusa");
    printf("\n[1] Calculo de cateto");
    printf("\n[2] Calculo da area do quadrado / retangulo");
    printf("\n[3] Calculo da area do triangulo");
    printf("\n[4] Calculo da area do circulo");
    printf("\n[5] Calculo da area do trapezio");
    printf("\n[6] Calculo da area do cubo");
    printf("\n[7] Calculo da area da Piramide");
    printf("\n[8] Calculo da area da esfera");
    printf("\n[9] Seno");
    printf("\n[10] Cosseno");
    printf("\n[11] Tangente");
    printf("\n[12] Formula da Equacao de segundo grau");


    printf("\nDigite a Opcao: ");
    scanf("%d", &opc);

    switch (opc)
    {

        case 0:

            printf("\nhipotenusa^(2)= cateto^(2) + cateto^(2)");

            break;

        case 1:

            printf("\ncateto^(2) = hipotenusa^(2) - cateto^(2)");
            break;

        case 2:

            printf("\nBase * Altura ou Lado * Lado");

            break;

        case 3:

            printf("\n(Base * Altura) / 2");

            break;

        case 4:

            printf("\nPi * r^(2)");

            break;

        case 5:

            printf("\n((Base Maior + Base Menor) * h) / 2");

            break;

        case 6:

            printf("\n 6 * a^(2)");

            break;

        case 7:

            printf("\n(lado da base * comprimento da base) + ((perimetro * altura)/2)");


            break;

        case 8:

            printf("\n 4Pi * raio^(2)");

            break;

        case 9:

            printf("\n Cateto Oposto / Hipotenusa");
            break;

        case 10:

            printf("\n Cateto Adjacente / Hipotenusa");

            break;

        case 11:

            printf("\n Cateto Oposto / Cateto Adjacente");

            break;

        case 12:

            printf("\nDelta = b^(2) - (4 * a * C )");
            printf("\nX1 = -b + sqrt(delta) / 2 * a");
            printf("\nX1 =n -b - sqrt(delta) / 2 * a");

            break;

    }

}

void velhaGame()
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

void forcaGame()
{
    char words[15][15] = {"Recursao", "quinquilharia", "programacao", "linguagem", "python", "java", "desenvolvimento", "interpretacao", "papibaquigrafo", "pindamonhangaba"};
    char l;

    int tent = 0;

    time_t tempo;
    srand((unsigned) time(&tempo));
    int esc = rand() % 8;

    char sorteada[15];

    strcpy(sorteada, words[esc]);

    strlwr(sorteada);

    char sorteada2[15];
    strcpy(sorteada2, sorteada);

    for(int i = 0; i < strlen(sorteada); i++)
    {
        sorteada[i] = '*';
    }


    while (tent < 6)
    {

        for(int i = 0; i < strlen(sorteada); i++)
        {
            printf(" %c", sorteada[i]);
        }
        printf("\n");

        printf("\nTentativas: %d", tent);

        printf("\nDigite uma letra: ");
        scanf(" %c", &l);
        tent++;

        for(int i = 0; i < strlen(sorteada); i++)
        {

            if (sorteada2[i] == l)
            {
                sorteada[i] = sorteada2[i];
                tent--;
            }

        }

        if (!strcmp(sorteada, sorteada2))
        {
            printf("Voce Ganhou, a Palavra era %s", sorteada2);
            break;
        }

    }

    if (tent > 5)
    {
        printf("\nVoce Perdeu, a Palavra era %s", sorteada2);
    }
}

void main()
{
    int opc;
    int tr = 0;
    char vl[5];

    while (tr == 0)

    {

        printf("\n[0] Calculo da hipotenusas e catetos");
        printf("\n[1] Calculo de area de figuras 2D");
        printf("\n[2] Calculo de area de figuras 3D,");
        printf("\n[3] Calculo de Sin, cos e tg");
        printf("\n[4] Equacoes de 2 grau completas e incompletas,");
        printf("\n[5] Printar as Formulas");
        printf("\n[6] Jogo da Velha");
        printf("\n[7] Jogo da Forca");

        printf("\nDigite a Opcao: ");
        scanf("%d", &opc);

        switch(opc)
        {
            case 0:

                calc_hip_cate();
                break;

            case 1:

                calc_fig2d();
                break;

            case 2:

                calc_fig3d();
                break;

            case 3:

                calc_sin_cos_tg();
                break;

            case 4:

                calc_equa();
                break;

            case 5:

                forms();
                break;

            case 6:
                velhaGame();
                break;

            case 7:
                forcaGame();
                break;
        }


        printf("\nDeseja Continuar? [y]/[n]:");
        scanf(" %c", &vl);

        if (vl[0] == 'y')
        {
            tr = 0;
        } else
        {
            tr = 1;
        }

    }


}
