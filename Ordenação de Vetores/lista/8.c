#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


const int p = 3;

main()
{

    float sal[p], nsal[p];
    char nms[p][30];

    for(int i = 0; i < p; i++)
    {
        printf("\nNome: ");
        scanf("%s", nms[i]);


        printf("\nSalario Atual: R$");
        scanf("%f", &sal[i]);

        nsal[i] = (sal[i]/100) * 108;
    }

    for(int i = 0; i < p; i++)
    {
        printf("\nNome: %s", nms[i]);
        printf("\nSalario Ajustado: R$%.2f", nsal[i]);
    }

}