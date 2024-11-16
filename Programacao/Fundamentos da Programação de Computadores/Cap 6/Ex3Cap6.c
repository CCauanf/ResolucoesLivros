#include <stdio.h>

int main(){
    int codProduto[10]; 
    int totalProduto[10];
    int codCliente;
    int respCod, respQtd;
    int apoioBool;

    //Cadastro

    for(int i = 0; i < 10; i++){
        printf("Digite o codigo do produto %i a ser cadastrado: ", i + 1);
        scanf("%i", &codProduto[i]);

        printf("Digite a quantidade do produto %i no estoque: ", i + 1);
        scanf("%i", &totalProduto[i]);
    }

    //Consulta

    do{
        apoioBool = 0;

        printf("\nDigite o codigo do cliente: ");
        scanf("%i", &codCliente);
        if(codCliente == 0) break;

        printf("Digite o codigo do produto para a compra: ");
        scanf("%i", &respCod);

        printf("Digite a quantidade a ser comprada: ");
        scanf("%i", &respQtd);

        for(int i = 0; i < 10; i++){
            if(respCod == codProduto[i]){
                apoioBool = 1;
                if(totalProduto[i] >= respQtd){
                    totalProduto[i] -= respCod;
                    printf("Pedido atendido. Obrigado e volte sempre\n");
                } else printf("Nao temos estoque suficiente desta mercadoria.\n");
            }
        }
        if(apoioBool == 0) printf("Codigo inexistente\n");
    }while(1);
    
    printf("Estoque final: ");

    for(int i = 0; i < 10; i++){
        printf("\n");
        printf("Produto %i:\n", i + 1);
        printf("\tCodigo: %i\n", codProduto[i]);
        printf("\tQuantidade final: %i", totalProduto[i]);
    }

    return 0;
}