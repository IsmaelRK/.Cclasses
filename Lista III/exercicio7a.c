#include <stdio.h>
#include <locale.h> // habilita acentos

main(){

    setlocale(LC_ALL, "portuguese");  // habilita acentos
    int dpassword, alfpassword;

    printf("Digite sua senha: \n");
    scanf("%d", &dpassword);

    alfpassword = 6013;

    if (dpassword == alfpassword){
        printf("Abrir Porta");
    }
    else{
        printf("Senha não confere");
    }
}
