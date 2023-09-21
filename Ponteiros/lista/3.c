#include<stdio.h>

main()
{


    int y, *p, x;

    y = 0;  //Declara o valor de y
    p = &y; // Declara o endereço do ponteiro
    x = *p; // Declara o valor de x como o conteudo de p
    x = 4;  // redeclara x como 4
    (*p)++;  // adiciona 1 a p
    x--;  // subtrai 1 de x
    (*p) += x;  // soma o valor de x ao conteudo de p
    printf("y = %d\n", y);  // mostra o resultado



}