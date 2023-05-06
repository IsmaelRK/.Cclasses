#include <stdio.h>
#include <math.h>
#include <conio.h>


main(){

    float value, km, hm, dam, dm, cm, mm;
    int choice;


    printf("Digite o Valor em metros: ");
    scanf("\n%f", &value);

    km = value/(pow(10, 3));
    printf("\n%.2f", km);

    hm = value/(pow(10, 2));
    printf("\n%.2f", hm);

    dam = value/10;
    printf("\n%.2f", dam);

    dm = value * 10;
    printf("\n%.2f", dm);

    cm = value * pow(10, 2);
    printf("\n%.2f", cm);

    mm = value * pow(10, 3);
    printf("\n%.2f", mm);


    getche();

}
