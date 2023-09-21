#include <stdio.h>
#define TAM (20) //cria uma constante // Alterado o valor
int main() {
    int vet[TAM], i, maior = 0, posMaior, menor = 0, posMenor;  // Iniciada a variavel TAM; a menor e maior também
    int rtn = 0, rtn2 = 0; // criadas

    for (i = 0; i < TAM; i++) {
        printf("Digite: "); // Adicionado1
        scanf("%d", &vet[i]);  // de %i para %d
    }

    posMaior = 0;
    for (i = 0; i < TAM; i++) // i = 0
    {
        if (vet[i] > maior){ // Adicionado
            maior = vet[i];
            posMaior = i;
        }

        else if (maior == vet[i] && rtn == 0){
            printf("Numero Igual. Posicao: %d", i+1);
            rtn = 1;

        }

    }

    posMenor = 0;
    for (i = 0; i < TAM; i++) {

        if (vet[i] < menor || menor == 0){  // Adicionado
            menor = vet[i];
            posMenor = i;
        }

        else if (menor == vet[i] && rtn2 == 0){
            printf("Numero Igual. Posicao: %d", i+1);
            rtn2 = 1;
        }

    }

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("\nvalor: %d", vet[i]); // Adicionado
    }
    printf("\nMaior valor: %d - posicao: %d", maior, posMaior+1); // %i para %d
    printf("\nMenor valor: %d - posicao: %d", menor, posMenor+1); // %i para %d
    return 0;
}
