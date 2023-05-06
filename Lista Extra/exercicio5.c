#include <stdio.h>
#include <conio.h>

int main()
{
    float hours, cash;
    int points;

    printf("Digite Qantidade de Horas Mensais: ");
    scanf("%f", &hours);


    if (hours <= 10){
        points = hours * 2;
    }

    if (hours > 10 && hours <= 20){
        points = hours * 5;
    }

    if (hours > 20){
        points = hours * 10;
    }

    cash = points * 0.05;
    printf("%.2f", cash);
    getche();
}
