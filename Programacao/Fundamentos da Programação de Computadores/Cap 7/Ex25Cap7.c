#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco[10];
    int qtdEstoq[5][10];
    int apoioAcumulador;
    int apoioResposta;
    float apoio2Acumulador;

    for(int i = 0; i < 10; i++){
        printf("Digite o preco do %io produto: R$", i + 1);
        scanf("%f", &preco[i]);
    }
    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 10; u++){
            printf("Digite a quantidade estocada do produto %i no armazem %i: ", u + 1, i + 1);
            scanf("%i", &qtdEstoq[i][u]);
        }
    }

    for(int i = 0; i < 5; i++){
        apoioAcumulador = 0;
        printf("Quantidade estocada no armazem %i: ", i + 1);
        for(int u = 0; u < 10; u++){
            apoioAcumulador += qtdEstoq[i][u];
        }
        printf("%i\n", apoioAcumulador);
    }

    printf("\n");

    apoioAcumulador = 0;
    for(int i = 0; i < 10; i++){
        apoioAcumulador = 0;
        printf("Quantidade do produto %i em todos os armazens: ", i + 1);
        for(int u = 0; u < 5; u++){
            apoioAcumulador += qtdEstoq[u][i];
        }
        printf("%i\n", apoioAcumulador);
    } 

    printf("\n");

    printf("\nDigite um armazem para verificar o preco do produto com maior estoque: ");
    scanf("%i", &apoioResposta);

    for(int i = 0; i < 10; i++){
        apoioAcumulador = 0;
        for(int u = 0; u < 10; u++){
            if(qtdEstoq[apoioResposta][i] >= qtdEstoq[apoioResposta][u]) apoioAcumulador++;
        }
        if(apoioAcumulador == 10){
            printf("O preco do produto com maior estoque neste armazem e: R$%.2f\n", preco[i]);
            break;
        } 
    }

    apoioAcumulador = 0;

    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            if(qtdEstoq[i][u] >= apoioAcumulador) apoioAcumulador = qtdEstoq[i][u];
        }
    }
     for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            if(qtdEstoq[i][u] <= apoioAcumulador) apoioAcumulador = qtdEstoq[i][u];
        }
    } 
    printf("O menor estoque armazenado e: %i\n", apoioAcumulador);


    apoio2Acumulador = 1;
    for(int i = 0; i < 5; i++){
        apoio2Acumulador = 1;
        printf("O custo do armazem %i: R$", i + 1);
        for(int u = 0; u < 10; u++){
            apoio2Acumulador = preco[u] * qtdEstoq[i][u];
        }
        printf("%.2f\n", apoio2Acumulador);
    }

    return 0;
}