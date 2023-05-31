#include <stdio.h>

main(){

    int usrt=1, loc;
    int flu = 0, bota = 0, vas = 0, flam = 0, oth = 0;
    int rj = 0, ni = 0, ot = 0, intercec = 0, intercec2 = 0;
    float cash, cbotf = 0, medc = 0;

    printf("<GUIA!>\n");
    printf("---------------------------\n\n");

    printf("Clubes:\n");
    printf("Fluminense [1]\n");
    printf("Botafogo   [2]\n");
    printf("Vasco      [3]\n");
    printf("Flamengo   [4]\n");
    printf("Outros     [5]\n");

    printf("---------------------------\n\n");
    printf("Locais:\n");
    printf("RJ      [1]\n");
    printf("Niterói [2]\n");
    printf("Outros  [3]\n");





    do
    {
        printf("\nQual Seu Time do Coração: ");
        scanf("%d", &usrt);

        printf("\nDigite Seu Salário: R$ ");
        scanf("%f", &cash);

        printf("\nOnde Você Mora: ");
        scanf("%d", &loc);

        switch (usrt)
        {
            case 1 :
                flu +=1;
                break;

            case 2 :
                bota +=1;
                cbotf += cash;
                medc = cbotf/bota;
                break;

            case 3 :
                vas +=1;
                break;

            case 4 :
                flam +=1;
                break;

            case 5 :
                oth +=1;
                break;

        }

        switch (loc)
        {
            case 1:
                rj++;
                break;

            case 2:
                ni++;
                break;
            
            case 3:
                ot++;
                break;
        }

        if(loc == 1 && usrt == 5){
            intercec++;
        }

        if (loc == 2 && usrt == 1)
        {
            intercec2++;
        }
        



    } while ((usrt!=0));
    {
        printf("Torcedores do Fluminense: %d\n", flu);
        printf("Torcedores do Botafogo: %d\n", bota);
        printf("Torcedores do Vasco: %d\n", vas);
        printf("Torcedores do Flamengo: %d\n", flam);
        printf("Outros: %d\n", oth);
        printf("Média Salárial dos Torcedores do Botafogo R$ %.2f\n", medc);
        printf("Moradores do RJ que Torcem para Outros Clubes: %d\n", intercec);
        printf("Moradores de Niterói que Torcem para o Fluminense: %d\n", intercec2);


        printf("Programa Finalizado!");
    }
    

}