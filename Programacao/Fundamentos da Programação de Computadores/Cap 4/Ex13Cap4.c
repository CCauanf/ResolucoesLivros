#include <stdio.h>

int main(){

    float preco, precoNovo;

    printf("Digite o preco do produto: R$");
    scanf("%f", &preco);

    if(preco < 50) precoNovo = preco + preco * 0.05;
    else if (preco < 100) precoNovo = preco + preco * 0.10;
    else precoNovo = preco + preco * 0.15;

    //

    printf("O preco R$%.2f e classificado como ", precoNovo);

    if (precoNovo < 80) printf("Barato");
    else if (precoNovo <= 120) printf("Normal");
    else if (precoNovo <= 200) printf("Caro");
    else printf("Muito Caro");

    return 0;
}