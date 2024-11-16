#include <stdio.h>

int main(){
    char clientes[8];
    int qtdDVDs[8];

    for(int i = 0; i < 8; i++){
        printf("Digite o nome do cliente %i: ", i + 1);
        scanf(" %c", &clientes[i]);
        printf("Digite a quantidade de DVDs alocados em 2011 pelo cliente %i: ", i + 1);
        scanf("%i", &qtdDVDs[i]);
    }

    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("O cliente %c tem direito a %i locacoes gratis\n", clientes[i], qtdDVDs[i]/10);
    }

    return 0;
}