#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <conio.h>


const int ncan = 3;

main()
{

    int vNotas[ncan], opc, sum = 0, cnf = 0;
    char vCandidatos[ncan][30];
    int auxNota;
    char auxNome[30], srcNome[30];


    for (int i = 0; i < ncan; i++)
    {
        printf("\nNome do Candidato: ");
        // gets(vCandidatos[i]);
        scanf("%s", vCandidatos[i]);

        printf("\nNota do Candidato: ");
        scanf("%d", &vNotas[i]);
    }

    printf("\n[0] Exibir media geral de todos os Candidatos");
    printf("\n[1] Exibir lista com nome e nota dos Candidatos");
    printf("\n[2] Procurar um Canditado\n\n");
    
    printf("Digite a Opcao Desejada: ");
    scanf("%d", &opc);


    switch (opc)
    {
    
        case 0:

            for (int i = 0; i < ncan; i++)
            {
                sum += vNotas[i];
            }

            sum = sum/ncan;
            printf("Media Geral: %d", sum);
            break;

        case 1:

            for (int i = 0; i < ncan; i++)
            {
                for (int j = i+1; j < ncan; j++)
                {

                    if(vNotas[j] > vNotas[i])
                    {
                        
                        auxNota = vNotas[i];
                        vNotas[i] = vNotas[j];
                        vNotas[j] = auxNota;


                        strcpy(auxNome, vCandidatos[i]);
                        strcpy(vCandidatos[i], vCandidatos[j]);
                        strcpy(vCandidatos[j], auxNome);
                    }

                }

            }

            for(int i = 0; i < ncan; i++)
            {

                printf("\nNome: %s", vCandidatos[i]);
                printf("\nNota: %d", vNotas[i]);

            }

            break;

        case 2:

            printf("Digite o Nome a Pesquisar: ");
            scanf("%s", srcNome);
            // gets(srcNome);
            


            for (int i = 0; i < ncan; i++)
            {
                if ((!strcmp(vCandidatos[i], srcNome)))
                {
                    printf("\nNome: %s", vCandidatos[i]);
                    printf("\nNota: %d", vNotas[i]);
                    cnf = 1;
                }
                
            }

            if (cnf == 0)
            {
                printf("Candidato Nao Encontrado");
            }



    }








}