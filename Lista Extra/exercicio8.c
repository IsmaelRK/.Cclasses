#include <stdio.h>
#include <conio.h>

main(){
    int num, cont, usrnum;

    printf("Digite seu Número: ");
    scanf("%d", &usrnum);

    cont = 0;
    srand(time(NULL));
    while (cont <= 4)
    {

        
        num = rand() % 50;
        printf("\n%d", num);

        if (num == usrnum)
        {
            printf("\n Você Acertou!");
            break;
        }
        

        cont += 1;
        
    }
    

    
    getche();
}