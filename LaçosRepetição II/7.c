#include <stdio.h>

main(){

int i, usrn;
float med1, med2, med3, med4;
float weight, sum1=0, sum2=0, sum3=0, sum4=0;

    for(i = 0; i < 2; i++){//alterar para 20

        printf("[1] 1 a 10 anos\n");
        printf("[2] 11 a 20 anos\n");
        printf("[3] 21 a 30 anos\n");
        printf("[4] Maior de 30 anos");

        printf("\nDigite sua Escolha: ");
        scanf("%d", &usrn);


        printf("\nDigite seu Peso: ");
        scanf("%f", &weight);

        switch (usrn){

            case 1:
                sum1+= weight;
                med1 = sum1/20;
                break;

            case 2:
                sum2+= weight;
                med2 = sum2/20;
                break;

            case 3:
                sum3+= weight;
                med3 = sum3/20;
                break;

            case 4:
                sum4+= weight;
                med4 = sum4/20;
                break;

        }
    }

    printf("\nMédia de Peso da Faixa de 1 a 10 Anos: %.2f", med1);
    printf("\nMédia de Peso da Faixa de 11 a 20 Anos: %.2f", med2);
    printf("\nMédia de Peso da Faixa de 21 a 30 Anos: %.2f", med3);
    printf("\nMédia de Peso da Faixa Maior que 30 Anos: %.2f", med4);

}