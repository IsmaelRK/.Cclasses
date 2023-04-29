#include <stdio.h>

int main(){
    int age;
    char name;
    
    
    printf("Digite seu Nome: \n");
    scanf("%c", &name);
    
    printf("Digite sua idade: \n");
    scanf("%d", &age);
    

    
    
    if (age <= 10){printf("R$ 30,00");}
    if (age > 10 && age <= 29){printf("R$ 60,00");}
    if (age > 29 && age <= 45){printf("R$ 120,00");}
    if (age > 45 && age <= 59){printf("R$ 150,00");}
    if (age > 59 && age <= 65){printf("R$ 250,00");}
    if (age > 65){printf("R$ 400,00");}
}