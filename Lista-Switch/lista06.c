/*
01)

``float raio;`` esta fora da main;
Faltam chaves no if;
A variavel ``area`` não foi iniciada (int ou float...)
O valor de PI, não foi definido com . (ponto), e sim com , (virgula), gerando um erro;
Biblioteca padrão (stdio.h) não foi importada;
Falta de resposta se a área for menor que 10;
Erro no calculo na variavel ``area``, pois estava sendo utilizado virgula no valor de PI;
Falta de organização no que usuário irá ver (\n).

Resolvendo:
*/

#include <stdio.h>
#include <math.h>

main(){
    float raio, area;
    printf ("Informe o raio: ");
    scanf("%f",&raio);
    area = 3.14 * pow(raio, 2);
    if (area > 10){
        printf ("Area maior que 10");
    }
    else{

        printf("A area é menor que 10: %f", area);

    }
}
