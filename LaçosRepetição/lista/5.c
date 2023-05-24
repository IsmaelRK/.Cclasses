#include <stdio.h>

main(){
    int acountry = 5000000, bcountry = 7000000;
    int atax = 3, btax= 2, years = 0;

    while (acountry <= 7000000)
    {
        acountry = (acountry / 100) * 103;
        bcountry = (bcountry / 100) * 102;
        years++;
    }

    printf("Anos Necessários: %d", years);
    
}