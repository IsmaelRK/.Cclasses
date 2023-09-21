#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


main(){

    char letrs[10];
    char temp;
    int i, vog = 0, con = 0;

    for (i = 0; i < 10; i++)
    {

        printf("\nDigite uma Letra: ");
        scanf(" %c", &temp);
        

        if ((temp == 'z')||(temp == 'Z'))
        {
            break;
        }
        else{
            letrs[i] = temp;
        }

    }


    // int a = i;
    // printf("%d", a);


    for (i = 0; i < a; i++)
    {
        printf("\n%c", letrs[i]);    
    }







    for (i = 0; i < a; i++)
    {
        if ((letrs[i] == 'A')||(letrs[i] == 'E')||(letrs[i] == 'I')||(letrs[i] == 'O')||(letrs[i] == 'U')||(letrs[i] == 'a')||(letrs[i] == 'e')||(letrs[i] == 'i')||(letrs[i] == 'o')||(letrs[i] == 'u'))
        {
            vog++;
        }
        else{
            con++;
        }
    }
    


    
    printf("\nN de Consoantes: %d", con);
    printf("\nN de Vogais: %d", vog);

}