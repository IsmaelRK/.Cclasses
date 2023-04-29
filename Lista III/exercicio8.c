#include <stdio.h>
#include <locale.h>

main(){
    int sex;
    float height;
    setlocale(LC_ALL, "portuguese");

    printf("Digite sua altura: \n");
    scanf("%f", &height);

    printf("Digite seu sexo. 1 para feminino e 2 para masculino: \n");
    scanf("%d", &sex);

    if (sex == 1){
        float calchw;
        calchw = (62.1 * height) - 44.7;
        printf("%f", calchw);
    }

    if (sex == 2){
        float calchm;
        calchm = (72.7 * height) - 58;
        printf("%f", calchm);
    }

}
