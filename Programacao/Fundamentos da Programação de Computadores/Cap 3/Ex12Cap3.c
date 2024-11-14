#include <stdio.h>

int main(){

    float salario_minimo, salario_func;
    int qtdsal_min;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_func);

    qtdsal_min = salario_func/salario_minimo;

    printf("Esse valor representa %i salario minimos", qtdsal_min);


    return 0;
}
