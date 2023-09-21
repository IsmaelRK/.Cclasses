#include <stdio.h>
#include <conio.h>

main()
{

    float matrix[50][50];
    float *p;

    int count;


    p = matrix[0];

    for (count=0; count < 2500; count++)
    {
        *p = 0.0;
        p++;
    }

    for (count=0; count < 2500; count++)
    {
        printf("\n%.2f", *(p+count));
    }

}