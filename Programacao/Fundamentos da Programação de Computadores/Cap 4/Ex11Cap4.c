#include <stdio.h>

int main(){
    float salAtual, aumento, novoSal;

    printf("Digite o salario atual: R$");
    scanf("%f", &salAtual);

    if(salAtual <= 300) aumento = salAtual * 0.15;
    else if (salAtual < 600) aumento = salAtual * 0.10;
    else if (salAtual < 900) aumento = salAtual * 0.05;
    else aumento = 0;

    novoSal = salAtual + aumento;

    printf("O salario atual e de: R$%.2f", novoSal);

    return 0;
}