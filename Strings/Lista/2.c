#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

main(){

    char txt[90], let, txt2[90];
    int i, j = 0;

    printf("Digite uma frase:\n");
    gets(txt);

    printf("Digite uma letra:\n");
    scanf("%c", &let);

    for (i = 0; i < 90; i++){

        if(txt[i] != let){
            txt2[j] = txt[i];
            j++;
        }
    }

    printf("-------------\n\n");
    puts(txt2);


}

