#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const int nAlns = 3;
main()
{

    float n1[nAlns], n2[nAlns];
    int m[nAlns];
    char sit[nAlns][3], nome[nAlns][30];
    int j = 0;


    for (int i = 0; i < nAlns; i++)
    {
        printf("\nNome: ");
        // gets(nome[i]);
        scanf("%s", nome[i]);

        printf("\nNota 1: ");
        scanf("%f", &n1[i]);

        printf("\nNota 2: ");
        scanf("%f", &n2[i]);

        m[i] = (n1[i] + n2[i]) / 2;
        printf("%d", m[i]);

        if (m[j] > 6)
        {
            strcpy(sit[j], "AP");
            j++;
        }
        else
        {
            strcpy(sit[j], "RP");
            j++;
        }
    }

    for (int i=0;i<3; i++) {
        printf("%s ", sit[i]);
    }



    printf("\nSituacoes");
    for (int l = 0; l < nAlns; l++)
    {
        printf("\n\n");
        printf("\n--------------------------------------\n");

        printf("\nNome: %s", nome[l]);
        printf("\nMedia: %d", m[l]);
        printf("\nSituacao: %s", sit[l]);

        printf("\n\n");
        printf("\n--------------------------------------\n");
    }
}
