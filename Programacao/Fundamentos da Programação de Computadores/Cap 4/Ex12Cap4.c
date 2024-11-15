#include <stdio.h>

int main(){

    float salBruto, valRec, imposto, gratificacao;

    printf("Digite o salario bruto: R$");
    scanf("%f", &salBruto);
    
    imposto = salBruto * 0.07;

    if(salBruto <= 350) gratificacao = 100; 
    else if (salBruto < 600) gratificacao = 75;
    else if (salBruto < 900) gratificacao = 50;
    else gratificacao = 35;

    valRec = salBruto + gratificacao - imposto;

    printf("O valor a receber e de: R$%.2f", valRec);

    return 0;
}