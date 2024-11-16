#include <stdio.h>

int main(){
    int vetor1[10];
    int vetor2[10];
    int apoio = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor da posicao %i do vetor: ", i);
        scanf("%i", &vetor1[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor1[i] == 0 || vetor1[i] < 0) continue;
        else vetor2[apoio] = vetor1[i];
        apoio++;
    }

    printf("Vetor 2: ");
    for(int i = 0; i < apoio; i++){
        printf("%i ", vetor2[i]);
    }


    return 0;
}