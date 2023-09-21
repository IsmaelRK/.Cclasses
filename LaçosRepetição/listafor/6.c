#include <stdio.h>

main(){


    int age, cont = 0;
    char sexo, nome;


    while(cont < 2){
        
        printf("\nNome: ");
        scanf("\n%c", &nome);

        printf("\nIdade: ");
        scanf("\n%d", &age);

        printf("\nSexo [M] / [F]: ");
        scanf("\n%c", &sexo);

        if(age > 21 && sexo == 'M'){
            printf("\nNome: %c", nome);
        }

        cont++;
    }


}