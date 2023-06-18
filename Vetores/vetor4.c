#include <stdio.h>

main(){

    int A[10], maior = 0;
    int i, x;


    for (i=0; i<10; i++){

        printf("\n Entre com os Numeros: ");
        scanf("%d", &A[i]);

        if (A[i] > maior){

            maior = A[i];
            x=i;
        }

    }

    printf("O Maior eh: %d", maior);



}
