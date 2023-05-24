#include <stdio.h>

main(){

    int usrn = -1, count = 0, higher, old;

    printf("Digite [0] para Parar\n");


    do
    {
        old = usrn;
        printf("Digite um Número: ");
        scanf("%d", &usrn);

        count++;

        if(old < usrn){
            higher = usrn;
        }

    } while (usrn != 0);{
        printf("Finished\n");
        printf("O maior é: %d", higher);
    }
    
}