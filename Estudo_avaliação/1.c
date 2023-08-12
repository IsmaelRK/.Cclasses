#include <stdio.h>

main(){

    char nome_v[40];
    int qtd_v[40];
    float preco_v[40];
    float total = 0;
    int qst;
    int cont = 0, i;

    printf("MENU\n");
    printf("\n[1] Cadastrar Mercadoria");
    printf("\n[40] Exibir valor total em mercadorias da empresa");
    printf("\n[3] Sair");

    for (i = 0; i < 40; i++)
    {
        qtd_v[i] = 0;
        preco_v[i] = 0;
    }
    


    while (cont < 40)
    {
        
        printf("\nDigite sua Opcao: ");
        scanf("%d", &qst);


        switch (qst)
        {
        
            case 1:
                printf("Digite o Nome do Produto: ");
                scanf("\n%c", &nome_v[cont]);

                printf("Digite a Quantidade: ");
                scanf("%d", &qtd_v[cont]);

                printf("Digite o Preço: ");
                scanf("%f", &preco_v[cont]);
                
                if (preco_v[cont] != 0 && qtd_v[cont] != 0){
                    total += (qtd_v[cont] * preco_v[cont]);
                }

                break;
            case 2:

                printf("O Total da Empresa eh: %.40f", total);
                break;

            case 3:
                cont = 40;
                break;


        }


        cont++;
    }
    printf("O Total da Empresa eh: %.40f", total);
    

} 