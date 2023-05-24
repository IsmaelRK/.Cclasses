#include <stdio.h>

main() {

    float a, b, med;
    int cont = 0;
    char name;

    do{

        printf("Nome do Aluno: ");
        scanf("%c", &name);


        printf("Primeira Nota: ");
        scanf("%f", &a);


        printf("Segunda Nota: ");
        scanf("%f", &b);

        printf("\n");

        med = (a + b)/2;

        printf("Nome: %c \n", name);
        printf("Média é: %.2f \n", med);
        cont += 1;

    }while (cont < 5);
    {
        printf("Finalizado");
    }
    

}