#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vetor[10];
    int pares[10];
    int impares[10];
    int apoioPares = 0;
    int apoioImpares = 0;

    for(int i = 0; i < 10; i++){vetor[i] = rand() % 100;}

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            pares[apoioPares] = vetor[i];
            apoioPares++;
        } else {
            impares[apoioImpares] = vetor[i];
            apoioImpares++;
        }
    }

    printf("Numeros pares: ");
    for(int i = 0; i < apoioPares; i++){printf("%i ", pares[i]);}
    printf("\n");

    printf("Numeros impares: ");
    for(int i = 0; i < apoioImpares; i++){printf("%i ", impares[i]);}


    return 0;
}