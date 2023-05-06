#include <stdio.h>

int main(){

    float price;
    int cod;

    printf("Preço: ");
    scanf("%f", &price);

    printf("Código: ");
    scanf("%d", &cod);


    printf("\nValor Total: %.2f", price);

    switch (cod){

        case 1:
            printf("\nRegião: Sul");
            break;

        case 2:
            printf("\nRegião: Norte");
            break;


        case 3:
            printf("\nRegião: Leste");
            break;

        case 4:
            printf("\nRegião: Oeste");
            break;

        case 5:
            printf("\nRegião: Nordeste");
            break;

        case 6:
            printf("\nRegião: Nordeste");
            break;

        case 7:
            printf("\nRegião: Centro-Oeste");
            break;

        case 8:
            printf("\nRegião: Centro-Oeste");
            break;

        default:
            printf("\nRegião: Importado");
            break;
    }
}