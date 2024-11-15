#include <stdio.h>

int main(){
    float salario;

    printf("Digite o valor do salario: R$");
    scanf("%f", &salario);

    if(salario < 500){
        salario += salario * 0.30;
        printf("O salario reajustado: R$%.2f", salario);
    } 
    else printf("Voce nao tem direito ao aumento");

    return 0;
}