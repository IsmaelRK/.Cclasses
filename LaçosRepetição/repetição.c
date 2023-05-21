#include <stdio.h>

main(){

    int cont;
    float A, B, R;
    cont = 1;


    while(cont<=5){
        printf("\n\nDigite um Valor: ");
        scanf("%f", &A);

        printf("\nDigite um Valor: ");
        scanf("%f", &B);

        R = A + B;
        printf("\nSome: %.2f", R);

        cont ++;
    }
}
