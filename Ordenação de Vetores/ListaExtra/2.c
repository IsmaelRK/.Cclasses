// Dada um string, composta por uma linha de texto, faça um programa que altera o estilo do texto invertendo as palavras da frase imitando o mestre jedi Yoda.
// Por questões de simplicidade, vamos considerar apenas 2 regras que funcionam para algums casos particulares: 

// 	Sentenças negativas: reorganize as frase movendo o "not" para o final. Por exemplo: 
// 				I will not help you -> I will help you not;

// 	Demais Sentenças: Tome as duas primeiras palavras da frase, e coloque elas no final da frase
// 				You will Talk like Yoda -> Like Yoda you will talk

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main()
{

    char str[60], str2[60];
    int c1, c2, c3;

    printf("Digite a frase: ");
    gets(str);
    strlwr(str);
    puts(str);

    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i+1; j < strlen(str); j++)
        {
            if (str[i] == 'n' && str[j] == 'o' && str[j+1] == 't')
            {
                    
                c1 = i;
                c2 = j;
                c3 = j+1;

            }

        }

    }

        for (int j = 0; j < strlen(str); j++)
        {
            
            if (j != c1 && j != c2 && j != c3)
            {
                str2[j] = str[j];
            }
            else
            {   
                str2[(strlen(str) - 3)] = str[c3];
                str2[(strlen(str) - 2)] = str[c2];
                str2[(strlen(str) - 1)] = str[c1];

                j += 3;
            }

        }
        puts(str2);
}