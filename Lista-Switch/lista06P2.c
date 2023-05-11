/*
Iniciação das variaveis fora da main;
Variavel r iniciada sem , para separação e não esta sendo utilizada;
Falta de biblioteca stdio;
O sinal de atribuir em C é =, sendo assim as variaves estarão mostrando um espaço na memoria e não o valor que deveria ser atribuido;
Y, em "uppercase" não foi iniciado;
Faltam Chaves ({}) para o if/else;
Falta de aspas duplas;
O primeiro IF e Else não mostram nada ao usuário;
Y não estava sendo utilizada pelo programa;
Todas as variaveis precisam ser floats.

*/



#include <stdio.h>

main (){

    float x, y, z;

    x = 9;
    y = 2;
    z = x/y; //4.5
    x = y+1; //3


    if (x>y){
    z = x + y - z;
    printf ("Valor de z: %.2f\n", z);
    }

    else{
    z = x + y;
    printf ("Valor de z: %.2f\n", z);
    }

    if (z<0){
    printf ("Negativo");
    }

    if (z>0){
    printf ("Positivo");
    }

}