#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){

    setlocale(LC_ALL, "");

    float height, width, length, med, capacity, dmcap, duration;

    printf("Altura: ");
    scanf("%f", &height);


    printf("Largura: ");
    scanf("%f", &width);

    
    printf("length: ");
    scanf("%f", &length);

    printf("Média de uso em litros por dia: ");
    scanf("%f", &med);


    capacity = height * width * length;
    dmcap = capacity/10; //1dm Igual a um litro
    duration = dmcap/med;


    printf("\nCapacidade: %.2fL", dmcap);
    printf("\nDurção: %.2f Dias", duration);

    if (duration < 2){printf("\nConsumo Elevado");}
    if (duration >= 2 && duration <= 7){printf("\nConsumo Moderado");}
    if (duration > 7){printf("\nConsumo Reduzido");}


    getche();
}
