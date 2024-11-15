#include <stdio.h>

int main(){
    int codigo, quantidade;
    float precoUnit, precoTotalNota, desconto, precoFinal;

    printf("Digite o codigo do produto: ");
    scanf("%i", &codigo);
    printf("Digite a quantidade do produto: ");
    scanf("%i", &quantidade);

    if(codigo >= 1 && codigo <= 10) precoUnit = 10;
    else if(codigo < 20) precoUnit = 15;
    else if (codigo < 30) precoUnit = 20;
    else if (codigo <= 40) precoUnit = 40;

    precoTotalNota = quantidade * precoUnit;

    if(precoTotalNota <= 250) desconto = 0.05;
    else if (precoTotalNota <= 500) desconto = 0.10;
    else desconto = 0.15;

    precoFinal = precoTotalNota - (precoTotalNota * desconto);

    printf("\nPreco unitario do produto: %.2f", precoUnit);
    printf("\nPreco total da nota: %.2f", precoTotalNota);
    printf("\nPorcentagem de desconto: %.0f%%", desconto * 100);
    printf("\nValor do desconto: %.2f", precoTotalNota * desconto);
    printf("\nPreco final da nota: %.2f", precoFinal);

    return 0;
}