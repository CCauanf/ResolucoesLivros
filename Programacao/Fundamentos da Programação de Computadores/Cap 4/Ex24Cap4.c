#include <stdio.h>

int main(){
    float preco;
    int categoria;
    char situacao;

    float aumento, imposto, novoPreco;

    printf("Digite o preco do produto: R$");
    scanf("%f", &preco);
    printf("Digite a categoria do produto: ");
    scanf("%i", &categoria);
    printf("Digite a situacao do produto: ");
    scanf(" %c", &situacao);

    if(preco <= 25) {
        if (categoria == 1) aumento = preco * 0.05;
        else if (categoria == 2) aumento = preco * 0.08;
        else if (categoria == 3) aumento = preco * 0.10;
    } else {
        if(categoria == 1) aumento = preco * 0.12;
        else if (categoria == 2) aumento = preco * 0.15;
        else if (categoria == 3) aumento = preco * 0.18;
    }

    if(categoria == 2 || situacao == 'R') imposto = preco * 0.05;
    else imposto = preco * 0.08;

    novoPreco = preco + aumento - imposto;

    printf("Valor do aumento: R$%.2f\n", aumento);
    printf("Valor do imposto: R$%.2f\n", imposto);
    printf("Preco novo: R$%.2f\n", novoPreco);

    printf("Classificacao: ");
    if(novoPreco <= 50) printf("Barato");
    else if (novoPreco < 120) printf("Normal");
    else printf("Caro");

    return 0;
}