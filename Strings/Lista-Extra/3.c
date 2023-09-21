#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main()
{

    char car[5][20], nm[20], econM[20];
    float kml[5], econML = 0, ltrsprc[5];
    int cont = 0;


    for(int i = 0; i < 5; i++)
    {

        printf("\nDigite o modelo: ");
        if (cont > 0)
        {
            getchar();
        }
        gets(nm);
        strcpy(car[i], nm);


        printf("\nDigite Quantos KM/L: ");
        scanf("%f", &kml[i]);

        printf("\n%s", car[i]);
        printf("\n%.2f", kml[i]);
        cont++;
    }

    for(int i = 0; i < 5; i++)
    {

        if ((kml[i] > econML) || (econML == 0))
        {

            econML = kml[i];
            strcpy(econM, car[i]);

        }
    }

    printf("\n\nO Mais Economico eh: %s", econM);

    
    for(int i = 0; i < 5; i++)
    {
        ltrsprc[i] = 1000/kml[i];
        printf("\n\nLitros Consumidos Para 1000 KM: %s - %.2fL", car[i], ltrsprc[i]);
    }
}