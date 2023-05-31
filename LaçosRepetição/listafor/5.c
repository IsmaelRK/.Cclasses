#include <stdio.h>

main(){

    int usrn, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;


    printf("\nCandidato 1 [1]");
    printf("\nCandidato 2 [2]");
    printf("\nCandidato 3 [3]");
    printf("\nCandidato 4 [4]");
    printf("\nNulo        [5]");
    printf("\nBranco      [6]");
    printf("\nDigite [7] para Encerrar");




    while (usrn != 7)
    {
        printf("\nDigite a Opção Desejada: ");
        scanf("%d", &usrn);

        switch (usrn)
        {
            case 1:
                c1++;
                break;


            case 2:
                c2++;
                break;


            case 3:
                c3++;
                break;


            case 4:
                c4++;
                break;

            case 5:
                nulo++;
                break;

            
            case 6:
                branco++;
                break;
        }

        printf("\nVotos Candidato 1: %d", c1);
        printf("\nVotos Candidato 2: %d", c2);
        printf("\nVotos Candidato 3: %d", c3);
        printf("\nVotos Candidato 4: %d", c4);
        printf("\nVotos Nulos: %d", nulo);
        printf("\nVotos em Branco: %d", branco);

    }

}