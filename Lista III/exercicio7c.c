#include <stdio.h>
#include <locale.h>

main(){
   setlocale(LC_ALL, "portuguese");

    float weight, height, imc;

    printf("Digite seu peso: ");
    scanf("%f", &weight);

    printf("Digite sua altura: ");
    scanf("%f", &height);

    imc = weight/(height * height);
    printf("%.2f \n", imc);


    if (imc >= 17.8 && imc <= 20.5){printf("Normal");}
    if (imc >= 20.5 && imc <= 24.5){printf("Sobrepeso");}
    if (imc >= 24.5){printf("Obesidade");}
    }
