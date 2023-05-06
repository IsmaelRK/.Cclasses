#include <stdio.h>
#include <conio.h>

int main()
{
    float litros, desconto, tot;
    char type;

    printf("Litros: ");
    scanf(" %f", &litros);

    printf("Tipo: ");
    scanf(" %c", &type);



    if (type == 'A'){
        if(litros <= 20){desconto = ((litros * 3.2) / 100) * 97;}
        else{desconto = ((litros * 3.2) / 100) * 95;}}

    if (type == 'G'){
        if(litros <= 20){desconto = ((litros * 5.2) / 100) * 96;}
        else{desconto = ((litros * 5.2) / 100) * 94;}}

    printf("Total Com Descontos: %.2f", desconto);

    getche();
}
