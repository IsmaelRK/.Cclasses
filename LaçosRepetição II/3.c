#include <stdio.h>

main(){

int cont=0, alq;
float sal, imposto;
char name;

    while(cont < 10){

        printf("\nNome: ");
        scanf("\n%c", &name);

        printf("\n Salário: R$ ");
        scanf("\n%f", &sal);

        if (sal < 600){
            printf("Isento");
        }

        if (sal >= 600 && sal < 1500){
            alq = 10;
            imposto = (sal/100) * alq;
            printf("\nAliquota: %d", alq);
            printf("\nImposto: R$ %.2f", imposto);
        }

        if (sal >= 1500){
            alq = 15;
            imposto = (sal/100) * alq;
            printf("\nAliquota: %d", alq);
            printf("\nImposto: R$ %.2f", imposto);
        }

        cont++;

    }

}