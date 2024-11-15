#include <stdio.h>

int main(){
    float precoAtual, desconto;
    int codigo;

    printf("Digite o preco atual do produto: R$");
    scanf("%f", &precoAtual);
    printf("Digite o codigo do produto: ");
    scanf("%i", &codigo);

    if(precoAtual < 30) desconto = 0;
    else if (precoAtual < 100) desconto = 0.10;
    else desconto = 0.15;

    printf("O valor do desconto e de: R$%.2f\n", desconto);
    printf("O novo preco e de: R$%.2f", precoAtual - desconto);

    return 0;
}