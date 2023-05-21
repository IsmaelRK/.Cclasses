#include <stdio.h>

main() {

    float a, b, med;
    int cont = 0;


    do{
        printf("Primeira Nota: ");
        scanf("%f", &a);


        printf("Segunda Nota: ");
        scanf("%f", &b);

        printf("\n");

        med = (a + b)/2;
        printf("Média é: %.2f \n", med);
        cont += 1;

    }while (cont < 5);
    {
        printf("Finalizado");
    }
    

}