#include <stdio.h>

main(){

    int med, agesum = 0, div;
    int age = 1, fq=0, mq=0, fq3045=0;
    char sexo;

    while (age != 0){

        printf("\nDigite Seu Sexo [f]/[m]: ");
        scanf("\n%c", &sexo);

        printf("\nDigite sua Idade: ");
        scanf("\n%d", &age);

        if (sexo == 'f' && age != 0){
            fq++;
        }

        if (sexo == 'm' && age != 0){
           mq++;
        }

        if (age >= 30 && age <= 45){
            fq3045++;
        }

        agesum += age;

    }

    div = (fq + mq ) - 1;
    if (div != 0){
        med = agesum/((fq + mq));
    }
    else{
        med = agesum/1;
    }
    printf("\nPessoas do sexo feminino com idade entre 30-45 anos: %d", fq3045);
    printf("\nNúmeros de pessoas do sexo masculino: %d", mq++);
    printf("\nMédia de Idade: %d", med);

}