#include <stdio.h>

int main(){

    int vetor[7];

    for (int i = 0; i < 7; i++){
        printf("Digite o vetor %i: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("Os numeros multiplos de 2 sao: ");

    for(int i = 0; i < 7; i++){
        if(vetor[i] % 2 == 0) printf("%i ", vetor[i]);
    }

    printf("\nOs numeros multiplos de 3 sao: ");

    for(int i = 0; i < 7; i++){
        if(vetor[i] % 3 == 0) printf("%i ", vetor[i]);
    }

    printf("\nOs numeros multiplos de 2 e 3 sao: ");

    for(int i = 0; i < 7; i++){
        if(vetor[i] % 6 == 0) printf("%i ", vetor[i]);
    }

    return 0;
}