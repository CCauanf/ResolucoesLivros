#include <stdio.h>

int main(){
    float salMedio, valCredito;

    printf("Digite o valor do salario medio: R$");
    scanf("%f", &salMedio);

    if(salMedio > 400) valCredito = 0.30 * salMedio;
    else if (salMedio > 300) valCredito = 0.25 * salMedio;
    else if (salMedio > 200) valCredito = 0.20 * salMedio;
    else valCredito = 0.10 * salMedio;

    printf("O valor do credito e de: R$%.2f", valCredito);


    return 0;
}