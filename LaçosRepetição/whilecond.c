#include <stdio.h>

main()
{
    char q;
    float A, B, P;

    q = 'S';
    while((q == 'S') || (q == 's')){


        printf("\n\nDigite um Valor: ");
        scanf(" %f", &A);

        printf("\n\nDigite um Valor: ");
        scanf(" %f", &B);

        P = A - B;

        printf("\nSubtração: %.2f", P);

        printf("\n\n\nDeseja Continuar S/N: ");
        scanf(" %c", &q);
    }


}