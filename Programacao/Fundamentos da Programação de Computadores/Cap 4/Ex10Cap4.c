#include <stdio.h>

int main(){

    float custoFab, precoConsumidor, porcDist, porcImp;

    printf("Digite o custo de fabrica: R$");
    scanf("%f", &custoFab);

    if(custoFab < 12000){
        porcDist = custoFab * 0.05;
        porcImp = 0;
    } else if (custoFab < 25000){
        porcDist = custoFab * 0.10;
        porcImp = custoFab * 0.15;
    } else {
        porcDist = custoFab * 0.15;
        porcImp = custoFab * 0.20;
    } 

    precoConsumidor = custoFab + porcDist + porcImp;

    printf("O preco para o consumidor e de: R$%.2f", precoConsumidor);

    return 0;
}