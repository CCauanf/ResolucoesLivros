#include <stdio.h>

int main(){
    char nomeProd[5];
    float precoProd[5];
    int qtdInf50 = 0;
    float apoioProd100 = 0;
    float mediaProd100 = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do produto %i: ", i + 1);
        scanf(" %c", &nomeProd[i]);
        printf("Digite o preco do produto %c: ", nomeProd[i]);
        scanf("%f", &precoProd[i]);
    }
    printf("\n");

    printf("Nome dos produtos com preco entre R$50 e R$100: ");
    for(int i = 0; i < 5; i++){
        if(precoProd[i] < 50) qtdInf50++;
        if(precoProd[i] > 100) {
            mediaProd100 += precoProd[i]; 
            apoioProd100++;
        }
        if(precoProd[i] >= 50 && precoProd[i] <= 100) printf("%c ", nomeProd[i]);
    }
    mediaProd100 /= apoioProd100;

    printf("\nQuantidade de produtos comn preco inferior a 50: %i\n", qtdInf50);
    printf("Media dos precos dos produtos com preco superior a 100: %.2f\n", mediaProd100);


    return 0;
}