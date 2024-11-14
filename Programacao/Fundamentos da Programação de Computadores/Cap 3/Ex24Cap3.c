#include <stdio.h>

int main(){

    float dinReais, dinDol, dinMarcoAl, dinLibEst;

    printf("Informe a quantidade de dinheiro que possui em reais: R$");
    scanf("%f", &dinReais);

    dinDol = dinReais * 1.80;
    dinMarcoAl = dinReais * 2;
    dinLibEst = dinReais * 3.57;

    printf("O valor fornecido possui as seguintes conversoes:\n");
    printf("Real para Dolares: %.2f\n", dinDol);
    printf("Real para Marco Alemao: %.2f\n", dinMarcoAl);
    printf("Real para Libra Esterlina: %.2f\n", dinLibEst);



    return 0;
}