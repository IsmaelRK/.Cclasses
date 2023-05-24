#include <stdio.h>

main(){
    float spn, sp, sn, usrn = 1;



    while (usrn != 0)
    {
        printf("Digite um Número: ");
        scanf("%f", &usrn);


        if(usrn < 0){
            sn += usrn;
        }

        else{
            sp += usrn;
        }
    }

    spn = sp + sn;

    printf("\nSoma dos Positivos = %.2f", sp);
    printf("\nSoma dos Negativos = %.2f", sn);
    printf("\nSoma dos Parcial = %.2f", spn);

}