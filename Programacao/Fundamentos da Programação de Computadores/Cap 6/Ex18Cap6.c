#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int vetor[15]; 
    int apoioMaior, apoioMenor;

    for(int i = 0; i < 15; i++){vetor[i] = rand() % 100; printf("%i ", vetor[i]);}
    printf("\n");

    for(int i = 0; i < 15; i++){
        apoioMaior = 0; apoioMenor = 0;
        for(int u = 0; u < 15; u++){
            if(i == u) continue;
            if(vetor[i] >= vetor[u]) apoioMaior++;
            if(vetor[i] <= vetor[u]) apoioMenor++;
        }
        if(apoioMaior == 14) printf("O maior numero do vetor e %i\n", vetor[i]);
        if(apoioMenor == 14) printf("O menor numero do vetor e %i\n", vetor[i]);
    }



    return 0;
}