#include <stdio.h>

main(){

int cont;
float p1, p2, sum = 0, med;
char name;

    for(cont = 0; cont < 15; cont++){

        printf("\nDigite seu Nome: ");
        scanf("\n%c", &name);

        printf("\nNota Prova 1: ");
        scanf("%f", &p1);

        printf("\nNota Prova 2: ");
        scanf("%f", &p2);

        sum += (p1 + p2);
        med = sum/15;

        printf("\nNome: %c", name);
        printf("\nNota 1: %.2f", p1);
        printf("\nNota 2: %.2f", p2);

    }

printf("\nMédia da Turma: %.2f", med);

}