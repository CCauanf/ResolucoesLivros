#include <stdio.h>

int main(){
    int vetor[10];
    int qtdNegativo = 0;
    int somaPositivos = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor do vetor %i: ", i);
        scanf("%i", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] < 0) qtdNegativo++;
        else somaPositivos += vetor[i];
    }

    printf("\nQuantidade de numeros negativos no vetor: %i", qtdNegativo);
    printf("\nSoma dos numeros positivos do vetor: %i", somaPositivos);

    return 0;
}