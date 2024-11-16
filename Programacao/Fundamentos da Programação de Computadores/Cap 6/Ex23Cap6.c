#include <stdio.h>

int main(){
    int vetor1[5];
    int vetor2[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o valor do vetor1 na posicao %i: ", i);
        scanf("%i", &vetor1[i]);
        printf("Digite o valor do vetor2 na posicao %i: ", i);
        scanf("%i", &vetor2[i]);
    }

    printf("Resultado: ");

    for(int i = 0, u = 4; i < 5; i++, u--){
        if(i == u) break;
        printf("%i ", vetor1[i] - vetor2[u]);
    }

    return 0;
}