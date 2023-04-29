# include <stdio.h>

 int main(){
     float largura, comprimento;
     printf("Digite a largura:\n");
     scanf("%f", &largura);
     
     printf("Digite o comprimento\n");
     scanf("%f", &comprimento);
     
     float x = largura * comprimento;
     printf("%f", x);
     
     return 0;
 }