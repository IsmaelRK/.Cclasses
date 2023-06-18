#include <stdio.h>

main(){

    int a[10], b[10], c[30], i;

    for (i = 0; i < 10; i++){

        printf("Digite um Numero para A: ");
        scanf("%d", &a[i]);

    }

    for (i = 0; i < 10; i++){

        printf("Digite um Numero para B: ");
        scanf("%d", &b[i]);

    }

    for (i = 0; i < 10; i++){

        c[i] = (a[i] + b[i]);
        printf("\nA soma eh: %d", c[i]);

    }

    for (i = 10; i < 20; i++){


        c[i] = (a[i-10] - b[i-10]);
        printf("\nA subtração eh: %d", c[i]);

    }

    for (i = 19; i < 29; i++){


        c[i] = (a[i-19] * b[i-19]);
        printf("\nA multiplicação eh: %d", c[i]);

    }

}