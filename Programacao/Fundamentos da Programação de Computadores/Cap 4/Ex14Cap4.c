#include <stdio.h>

int main(){
    float salario;

    printf("Digite o valor do salario: R$");
    scanf("%f", &salario);

    if(salario < 300) salario += salario * 0.5;
    else if (salario <= 500) salario += salario * 0.4;
    else if (salario <= 700) salario += salario * 0.3;
    else if (salario <= 800) salario += salario * 0.2;
    else if (salario <= 1000) salario += salario * 0.1;
    else salario += salario * 0.05;

    printf("O valor do salario novo e de: R$%.2f", salario);

    return 0;
}