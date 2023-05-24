#include <stdio.h>

main(){
    int age, count = 0, age50 = 0, inf40k = 0, countheight = 0;
    float height, weight, medheight, sumheight, perc40;
    




    while (count < 25)
    {
        printf("Digite a Idade: ");
        scanf("%d", &age);


        printf("Digite a Altura: ");
        scanf("%f", &height);


        printf("Digite o Peso: ");
        scanf("%f", &weight);


        if (age >= 10 && age <= 20){
            sumheight += height;
            countheight++;
        }

        if(age > 50){
            age50++;
        }

        if(weight < 40){
            inf40k++;
        }

        count++;
        printf("\n--------------------------------------------------------\n");
    }

    perc40 = (25.0/100) * inf40k;
    medheight = sumheight/countheight;


    printf("Quantidade de Pessoas com idade superior a 50 anos: %d\n", age50);
    printf("Média das Alturas das Pessoas com Idade Entre 10 e 20 Anos: %.2f\n", medheight);
    printf("Porcentagem de Pessoas com Peso Inferior a 40 KG Entre Todas as Pessoas Analisadas: %.2f\n", perc40);

}