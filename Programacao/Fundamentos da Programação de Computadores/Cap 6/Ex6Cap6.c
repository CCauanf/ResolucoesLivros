#include <stdio.h>

int main(){
    float totalVendas[10];
    float percentComissao[10];
    char nomes[10]; //Os nomes serão representados por um caractere, posteriormente, em strings, poderemos
                    //adicionar nomes completos
    float valReceber[10];
    float somaVendas = 0;
    int apoioMaior, apoioMenor;

    for(int i = 0; i < 10; i++){
        printf("Digite o nome do vendedor %i: ", i + 1);
        scanf(" %c", &nomes[i]);

        printf("Digite o total de vendas do vendedor %i: R$", i + 1);
        scanf("%f", &totalVendas[i]);

        printf("Digite o percentual de comissao do vendedor %i: ", i + 1);
        scanf("%f", &percentComissao[i]);
    }

    //
    printf("Relatorio:");
    for(int i = 0; i < 10; i++){
        valReceber[i] = totalVendas[i] * (percentComissao[i] / 100);
        printf("\nVendedor %c\n", nomes[i]);
        printf("\tValor a receber: R$%.2f", valReceber[i]);
        somaVendas += totalVendas[i];
    }

    printf("\nTotal das vendas de todos os vendedores: R$%.2f", somaVendas);

    apoioMaior = 0; 

    for(int i = 0; i < 10; i++){
        apoioMaior = 0;
        for(int u = 0; u < 10; u++){
            if(i == u) continue;
            if(valReceber[i] > valReceber[u]) apoioMaior++;
        }
        if(apoioMaior == 9){
            printf("\nO maior valor a receber e de %c: R$%.2f\n", nomes[i], valReceber[i]);
        } else if (apoioMaior == 0) apoioMenor = i; 
    }

    printf("O menor valor a receber e de %c: R$%.2f", nomes[apoioMenor], valReceber[apoioMenor]);

    return 0;
}