#include <stdio.h>
#include <conio.h>

main(){

    float width, length, area;

    printf("Insira a largura: ");
    scanf("%f", &width);

    printf("Insira o comprimento: ");
    scanf("%f", &length);


    area = width * length;


    if (area < 100){
        printf("TERRENO POPULAR");
    }

    if (area >= 100 && area <= 500){
        printf("TERRENO MASTER");
    }

    if (area > 500){
        printf("TERRENO VIP");
    }
    getche();

}
