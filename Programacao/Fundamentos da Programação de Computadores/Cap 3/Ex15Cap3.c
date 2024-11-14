#include <stdio.h>

int main(){

    float salario;
    float conta1, conta2;
    float salarioFinal;

    printf("Digite o salario de Joao: ");
    scanf("%f", &salario);

    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);

    printf("Digte o valor da segunda conta: ");
    scanf("%f", &conta2);

    conta1 += conta1 * 0.02; 
    conta2 += conta2 * 0.02; 

    salarioFinal = salario - (conta1 + conta2);

    printf("Sobrara %.2f do salario de joao", salarioFinal);


    return 0;
}
