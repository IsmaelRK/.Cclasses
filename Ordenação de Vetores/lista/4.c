#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

main() // Working on it
{


    char str[26], str2[26];
    char letras[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char aux, jStr;


    printf("\nDigite a String: ");
    scanf("%s", str);

    strcpy(str2, str);
    strlwr(str2);


    for (int i = 0; i < strlen(str2); i++)
    {
        for (int j = i + 1; j < 26; j++)
        {
            
            if (str2[i] == str2[j])
            {
                sprintf(jStr, "%d", j);
                str2[i] = jStr;
            }

        }

    }



    for (int i = 0; i < strlen(str2); i++)
    {
        
        printf("\n: %s", str2);

    }


}