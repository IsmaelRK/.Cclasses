#include <stdio.h>

main(){
    int i, sum = 0, usrn;
    float med;
    char cont = 's';

    for(i= 1; i >= 0; i++){
        printf("\nDigite um Numero: ");
        scanf("\n%d", &usrn);
        sum += usrn;
        med = (sum) /i;
        printf("\nMédia: %.2f", med);
    }

}