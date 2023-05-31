#include <stdio.h>

main(){

    int countc = 0, countp = 0;
    float height, weight;
    float medweight, medheight;
    float sumweight = 0, sumheight = 0;

    while (countc < 30)
    {
        
        sumheight = 0;
        sumweight = 0;
        while (countp < 12)
        {
            printf("\nDigite o Peso: ");
            scanf("%f", &weight);


            printf("\nDigite a Altura: ");
            scanf("%f", &height);


            sumheight += height;
            sumweight += weight;
            countp++;
        }

        countp = 0;
        medheight = sumheight/12;
        medweight = sumweight/12;

        printf("\nMédia de Altura: %.2f", medheight);
        printf("\nMédia de Peso: %.2f", medweight);
        countc++;
        
    }
}