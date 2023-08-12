#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

main(){
    
    int num;
    printf("Digite a Quantidade de caracteres: ");
    scanf("%d", &num);


    char txt[num];
    printf("Digite seu texto: \n");
    gets(txt);
    strupr(txt);
    printf("Exibindo seu texto: \n");
    puts(txt);




}