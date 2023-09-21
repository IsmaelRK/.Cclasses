#include <stdio.h>

/*Utilizado Juros Simples na correção mensal e não Compostos*/

main(){
    float imp, tot, correcao_total;
    int nr = 1, ma, perc, correcao_meses;

    while (nr != 0)
    {
        printf("\nDigite o Nº de Registro: ");
        scanf("%d", &nr);

        printf("\nDigite o Imposto: R$ ");
        scanf("%f", &imp);

        printf("\nDigite o Atraso em Meses: ");
        scanf("%d", &ma);

        if (imp <= 500){perc = 1;}
        if (imp > 500 && imp <=1800 ){perc = 2;}
        if (imp > 1800 && imp <=5000 ){perc = 4;}
        if (imp > 5000 && imp <=12000 ){perc = 7;}
        if (imp > 12000 ){perc = 12;}

        correcao_meses = perc * ma;
        correcao_total = (imp/100) * correcao_meses;
        tot = correcao_total + imp;
        
        printf("\nRegistro: %d", nr);
        printf("\nImposto: %.2f", imp);
        printf("\nAtraso em Meses: %d", ma);
        printf("\nMulta: R$ %.2f", correcao_total);
        printf("\nValor Total: R$ %.2f", tot);   
    }
}
