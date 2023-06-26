#include <stdio.h>

main(){
    int v[8], sum = 0, m5 = 0, mai10 = 0, men30 = 0, maior = 0, i;
    float med;

    for (i = 0; i < 8; i++)
    {
        printf("Digite um Numero: ");
        scanf("%d", &v[i]);
    }
    
    for (i = 0; i < 8; i++)
    {
        
        sum += v[i];

        if (v[i] % 5 == 0){
            m5++;
        }

        if (v[i] > 10){
            mai10++;
        }

        if (v[i] < 30){
            men30++;
        }

        if (v[i] > maior || maior == 0){
            maior = v[i];
        }

    }

    med = sum / 8;


    printf("\nMedia: %.2f", med);
    printf("\nMultiplos de 5: %d", m5);
    printf("\nMaiores que 10: %d", mai10);
    printf("\nMenores que 30: %d", men30);
    printf("\nMaior Numero do Vetor: %d", maior);
}