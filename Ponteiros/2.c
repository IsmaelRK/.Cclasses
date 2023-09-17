#include <stdio.h>
#include <conio.h>

main()
{
    int vet[5] = {1,2,3,4,5};
    int  *p = vet;


    for (int i = 0; i  < 5; i++)
    {
        printf("\n%d", *(p+i));
    }


}