#include <stdio.h>

main(){

    char sexo;
    float height = 0, h_height = 0, s_height = 0;
    float w_sumh = 0;
    float mperc, wperc;
    int cont = 0, qwom = 0, qmen = 0;


    while (cont < 3) //Alterar para 50
    {
        printf("Altura: ");
        scanf("%f", &height);

        printf("Sexo [f / m] | [F / M]: ");
        scanf("\n%c", &sexo);

        if(height > h_height || h_height == 0){
            h_height = height;
        }

        if(height < s_height || s_height == 0){
            s_height = height;
        }

        if (sexo == 'f' || sexo == 'F'){
            w_sumh += height;
            qwom++;
        }

        if (sexo == 'm' || sexo == 'M'){
            qmen++;
        }

        cont++;    
    }

    w_sumh = w_sumh/qwom;
    mperc = ((qmen/3.0) * 100); //Alterar para 50
    wperc = ((qwom/3.0) * 100); //Alterar para 50

    printf("\nMaior Altura: %.2f M", h_height);
    printf("\nMenor Altura: %.2f M", s_height);
    printf("\nMedia de Altura Feminina: %.2f M", w_sumh);
    printf("\nHomens Entrevistados: %d", qmen);
    printf("\nPorcentagem de Homens: %.2f", mperc);
    printf("\nPorcentagem de Mulheres: %.2f", wperc);


}