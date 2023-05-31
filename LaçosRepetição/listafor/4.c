#include <stdio.h>
#include <math.h>

main(){

    int cont = 0;
    float usrnum, quad, cube;

    while (cont < 4)
    {
        printf("\nDigite um Número: ");
        scanf("%f", &usrnum);

        quad = pow(usrnum, 2);
        cube = pow(usrnum, 3);

        printf("\nQuadrado do Número: %.2f", quad);
        printf("\nCubo do Número: %.2f", cube);
        cont++;
    }
    
}