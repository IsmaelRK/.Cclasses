#include <stdio.h>

main(){

    int ano;


    printf("Ano: ");
    scanf("%d", &ano);


    switch(ano){

        case 1982:
            printf("Na espanha, campeão: Itália");
            break;

        case 1986:
            printf("No México, campeão: Argentina");
            break;

        case 1990:
            printf("Na Itália, campeão: Alemanha");
            break;

        case 1994:
            printf("Nos EUA, campeão: Brasil");
            break;
        
        case 1998:
            printf("Na França, campeão: França");
            break;

        case 2002:
            printf("Na Coreia e no Japão, campeão: Brasil");
            break;

        case 2006:
            printf("Na Alemanha, campeão: Itália");
            break;

        case 2010:
            printf("Na Africa do Sul, campeão: Espanha");
            break;

        case 2014:
            printf("No Brasil, campeão: Alemanha");
            break;

        default:
            printf("Inválido");

    }


}