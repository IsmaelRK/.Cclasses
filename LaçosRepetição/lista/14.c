#include <stdio.h>

main(){

    int usrn = 1, higher = 0, smaller = 0;

    printf("Digite [0] para Parar");
    while (usrn != 0)
    {

        printf("Digite o Número:");
        scanf("%d", &usrn);

        if (usrn < 0)
        {
            printf("Digite Apenas Números Positivos!\n");
        }

        else{

            if(usrn > higher){
                higher = usrn;
            }

            if(usrn < smaller || smaller == 0){

                if (usrn != 0)
                {
                    smaller = usrn;
                }
            }
        }
    }

    printf("\nO maior é: %d", higher);
    printf("\nO menor é: %d", smaller);
}