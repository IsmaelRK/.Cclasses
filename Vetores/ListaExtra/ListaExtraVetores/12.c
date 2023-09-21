#include <stdio.h>

main(){

    int qtvol, i, melhortmp = 0, melhorvolt, sum = 0;
    float med;

    printf("Digite a Quantidade de Voltas: ");
    scanf("%d", &qtvol);

    int v[qtvol];

    for(i = 1; i <= qtvol; i++){

        printf("Digite o Tempo: ");
        scanf("%d", &v[i]);
    }


    for(i = 1; i <= qtvol; i++){

        if (melhortmp > v[i] || melhortmp == 0)
        {
            melhortmp = v[i];
            melhorvolt = i;
        }

        sum += v[i];
        med = (sum * 1.0) / qtvol;
    }

    printf("\nMelhor Tempo: %d", melhortmp);
    printf("\nMelhor Volta: %d", melhorvolt);
    printf("\nTempo Medio das Voltas: %.2f", med);
}