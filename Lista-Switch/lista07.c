#include <stdio.h>
#include <math.h>

main(){


    int opc;
    float b, h, a, d1, d2, b1, b2, r;

    printf("Menu:\n");
    printf("(1)Triângulo\n");
    printf("(2)Trapézio\n");
    printf("(3)Círculo\n");
    printf("(4)Losango\n");
    printf("        Opção: ");
    scanf("%d", &opc);

    switch (opc){

        case 1:

            printf("Base: ");
            scanf("%f", &b);

            printf("Altura: ");
            scanf("%f", &h);

            a = (b * h) / 2;

            printf("Resultado = %.2f", a);
            break;

        case 2:
            
            printf("Base 1: ");
            scanf("%f", &b1);

            printf("Base 2: ");
            scanf("%f", &b2);

            printf("Altura: ");
            scanf("%f", &h);

            a = ((b1 + b2) * h)/2;

            printf("Resultado = %.2f", a);
            break;

        case 3:
            
            printf("Raio: ");
            scanf("%f", &r);


            a = 3.14 * (pow(r,2));

            printf("Resultado = %.2f", a);
            break;

        case 4:
            
            printf("Diagonal 1: ");
            scanf("%f", &d1);

            printf("Diagonal 2: ");
            scanf("%f", &d2);


            a = (d1 *d2) / 2;

            printf("Resultado = %.2f", a);
            break;

    }

}
