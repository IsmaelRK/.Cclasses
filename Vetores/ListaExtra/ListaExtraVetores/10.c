#include <stdio.h>

main(){

    int i = 0, i2, acertos = 0;
    char gabarito[5], resposta[5];

    gabarito[0] = 'E';
    gabarito[1] = 'A';
    gabarito[2] = 'B';
    gabarito[3] = 'C';
    gabarito[4] = 'A';
    
    while (i < 20)
    {
        for(i2 = 0; i2 < 5; i2++){
            printf("\nDigite a Resposta: ");
            scanf("\n%c", &resposta[i2]);
        }

        for(i2 = 0; i2 < 5; i2++){
            if (gabarito[i2] == resposta[i2]){
                acertos++;
            }
        }

        printf("\nAcertos: %d", acertos);

        i++;
        acertos = 0;
    }
    


}