// Uma agencia espiã deseja enviar mensagens secretas para seus agentes.
// O codigo dessas mensagens é a substituição das vogais por numeros, sendo que as vogais a e i o u correspondem a 2 3 4 5 6. Nesse codigo a frase "EU ESTOU NA AULA DE ICC" corresponde a
// frase: "36 3ST56 N2 26L2 DE 4CC".
// Faça um programa em C que receba uma frase e a codifique-a. A frase deve possuir no maximo 60 caracteres 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

main()
{

    char msg[60], msgV[60];


    printf("\nEntre a Mensagem: ");
    // gets(msg);
    scanf("%s", msg);


    for (int i = 0; i < strlen(msg); i++)
    {



        if (msg[i] == 'a')
        {
            //strcat(msgV[i], '2');
            msgV[i] = '2';
        }
        else if (msg[i] == 'e')
        {
            //strcat(msgV[i], '3');
            msgV[i] = '3';
        }
        else if (msg[i] == 'i')
        {
            //strcat(msgV[i], '4');
            msgV[i] = '4';
        }
        else if (msg[i] == 'o')
        {
            //strcat(msgV[i], '5');
            msgV[i] = '5';
        }
        else if (msg[i] == 'u')
        {
            //strcat(msgV[i], '6');
            msgV[i] = '6';
        }
        else
        {
            //strcat(msgV[i], msg[i]);
            msgV[i] = msg[i];
        }

    }

    // puts(msgV);
    printf("%s", msgV);
        

}