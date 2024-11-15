#include <stdio.h>

int main(){
    float salario;

    printf("Digite o valor do salario: R$");
    scanf("%f", &salario);

    if(salario <= 300) salario += salario * 0.35;
    else salario += salario * 0.15;

    printf("O valor do salario reajustado e de: R$%.2f", salario);

    return 0;
}