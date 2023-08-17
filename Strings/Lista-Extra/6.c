#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    char str[30], str2[30], str3[30];
    int r_Cond, j = 0;

    printf("\nDigite a String: ");
    gets(str);
    strlwr(str);
    puts(str);


    for (int i = 0; i <= strlen(str); i++)
    {

        if (str[i] == 'r' && str[i+1] == 'r')
        {
            str2[j++] = 'l';
            i++;
        }
        else if (str[i] == 'r' && strlen(str - 1) != i)  //&& str[i+1] != ' '
        {
            str2[j++] = 'l';
        }
        else
        {
            str2[j++] = str[i];
        }
        

    }
    puts(str2);
}








//     for (int i = 0; i < strlen(str); i++)
//     {

//         if (str[i] == 'r' && str[i+1] == 'r')
//         {
//             // printf("Hit2x");

//             // strncpy(str2, str + 0, i);
//             // i++;
//             // strncpy(str3, str + i++, strlen(str));
//             // strcat(str2, str3);

//             // str[i] = ' ';
//             // str[i+1] = 'l';
            

            
//         }
//         else if (str[i] == 'r' && str[i+1] != ' ')
//         {
//             // printf("Hit");
//             str[i] = 'l';
//         }

//     }
//     puts(str2);
// }




// if (str[i] == 'r')
//         {
//             if (str[i+1] == 'r')
//             {
//                 i++;

//                 if (str[i+1] != ' ')
//                 {
//                     puts(str);
//                     printf("hited");
//                 }
//             }

//         }