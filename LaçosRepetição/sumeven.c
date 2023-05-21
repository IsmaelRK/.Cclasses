#include <stdio.h>

main(){

    int cont, sum, usrn;
    cont = 100;
    sum = 100;


    printf("Digite um número par: ");
    scanf("%d", &usrn);


    if(usrn % 2 != 0){
        printf("Número Digitado Não É Par\n");
    }

    do
    {
        sum = cont;
        if (sum % 2 == 0 && usrn % 2 == 0){
            sum += usrn;
            printf("Soma: %d \n", sum);
        }
        cont += 1;

    } while (cont < 200 && usrn % 2 == 0);
    {
        printf("Finished");
    }
    

}