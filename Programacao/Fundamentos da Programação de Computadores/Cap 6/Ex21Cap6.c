#include <stdio.h>

int main(){
    int vetor1[10];
    int vetor2[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor da posicao %i do vetor: ", i);
        scanf("%i", &vetor1[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor1[i] == 0) vetor2[i] = 1;
        else vetor2[i] = vetor1[i];
    }

    printf("Vetor1: ");
    for(int i = 0; i < 10; i++){
        printf("%i ", vetor1[i]);
    }

    printf("\nVetor2: ");
    for(int i = 0; i < 10; i++){
        printf("%i ", vetor2[i]);
    }

    return 0;
}