#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main()
{

    char str1[100];
    printf("\n Entre com uma string: ");
    gets(str1);
   // strupr(str1);  //mai
   // strlwr(str1);  //min

    strrev(str1);  //inv

    printf("\n A string resultante eh: %s", str1);

}