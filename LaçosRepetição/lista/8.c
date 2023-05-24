#include <stdio.h>

// Revisar & Resolver Bugs!!!!

main(){
    float cash, sumcash = 0, medcash;
    int age = 0, cont = -1, hage = 0, mage = 0, oldage;
    int nwom = 0;
    char sexo;


    while (age >= 0)
    {

        printf("Digite a Idade: ");
        scanf("%d", &age);

        printf("Digite o Salário: R$ ");
        scanf("%f", &cash);

        printf("Digite o Sexo: ");
        scanf("\n%c", &sexo);

        sumcash += cash;

        if (age > hage)
        {
            hage = age;
        }

        if ((age < mage)||(mage == 0))
        {
            if(age > -1 ){
                mage = age;
                } 

        }

        if (sexo == 'f' && cash <= 100)
        {
            nwom++;
        }

        cont++;
    }

    medcash = (sumcash/cont);

    printf("\nMédia Salárial: R$%.2f", medcash);
    printf("\nMenor Idade: %d", mage);
    printf("\nMaior Idade: %d", hage);
    printf("\nMulheres com Salário até R$ 100: %d", nwom);

}
