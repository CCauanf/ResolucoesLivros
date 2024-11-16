#include <stdio.h>

int main(){
    char nomesProd[10];
    int codProd[10];
    float precosProd[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o nome do produto: ");
        scanf(" %c", &nomesProd[i]);
        printf("Digite o preco do produto: R$");
        scanf("%f", &precosProd[i]);
        printf("Digite o codigo do produto: ");
        scanf("%i", &codProd[i]);
    }

    for(int i = 0; i < 10; i++){
        if(codProd[i] % 2 == 0 || precosProd[i] > 1000){
            printf("O produto %c, com preco R$%.2f sofrera aumento e passara a ser: ", 
            nomesProd[i], precosProd[i]);
            
            if(codProd[i] % 2 == 0 && precosProd[i] > 1000){
                precosProd[i] += precosProd[i] * 0.2;
            } else if (codProd[i] % 2 == 0){
                precosProd[i] += precosProd[i] * 0.15;
            } else precosProd[i] += precosProd[i] * 0.10;

            printf("R$%.2f\n", precosProd[i]);
        }
    }

    return 0;
}