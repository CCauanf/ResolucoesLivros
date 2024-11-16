#include <stdio.h>

int main(){
    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor da posicao %i: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("Elementos positivos do vetor: ");

    for(int i = 0; i < 10; i++){
        if(vetor[i] > 0) printf("%i ", vetor[i]);
    }

    return 0;
}