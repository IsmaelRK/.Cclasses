#include <stdio.h>
#include <string.h>


int dec_bin(int dec)
{

    char bin[100];
    int num;
    int i = 0;

    num = dec;

    if (dec >= 0) {
        if (dec == 0) {
            strcpy(bin, "0");
        } else {
            while (dec > 0) {
                int resto = dec % 2;
                bin[i] = resto + '0';
                dec = dec / 2;
                i++;
            }
            bin[i] = '\0';
            strrev(bin);
        }

        printf("O numero %d em binario eh: %s", num, bin);
    }
}

main()
{
    int n;

    printf("Digite o Numero: ");
    scanf("%d", &n);

    dec_bin(n);
}