#include <stdio.h>

main(){

    char cont = 's';
    float c_temptoconv, conv;

    while (cont == 's')
    {
        printf("\nDeseja Continuar? [s/n]: ");
        scanf("\n%c", &cont);

        if(cont == 's'){
            printf("\nDigite a Temperatura em Célcius: ");
            scanf("\n%f", &c_temptoconv);

            conv = (9/5 * c_temptoconv) + 32;
            printf("\n%.2fºC Equivale(em) a %.2fºF", c_temptoconv, conv);
        }
    }
}