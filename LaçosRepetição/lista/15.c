#include <stdio.h>

main(){

    int usrn = 1, cont = 0, sum = 0;
    float med;

    while (usrn != 0)
    {
        printf("Digite o Número: ");
        scanf("%d", &usrn);

        if (usrn > 0 && usrn % 5 == 0){

            sum += usrn;
            cont++;
        }
        if (usrn < 0){
            printf("\nInválido! Apenas Números Positivos\n");
        }

    }
    
    med = (float) sum / cont;
    printf("Média dos Números Múltiplos de 5: %.2f", med);
}