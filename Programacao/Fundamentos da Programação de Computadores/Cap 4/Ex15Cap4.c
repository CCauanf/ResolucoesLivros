#include <stdio.h>

int main(){

    int tipoInv;
    float valorInv;

    printf("Digite o tipo do investimento:\n");
    printf("1 - Poupanca\n");
    printf("2 - Fundos de renda fixa\n");
    printf("Resposta: ");
    scanf("%i", &tipoInv);

    printf("Digite o valor do investimento: R$");
    scanf("%f", &valorInv);

    if(tipoInv == 1) valorInv += valorInv * 0.03; 
    else valorInv += valorInv * 0.04;

    printf("O valor corrigido apos um mes de investimento: R$%.2f", valorInv);

    return 0;
}