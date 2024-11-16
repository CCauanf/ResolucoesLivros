#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(){
    srand(time(NULL));
    int vetor[15];
    int apoio;

    for(int i = 0; i < 15; i++) vetor[i] = rand() % 100;

    for(int i = 0; i < 15; i++){
        apoio = 0;
        if(vetor[i] == 2 || vetor[i] == 3) printf("%i ", vetor[i]);
        if(vetor[i] == 0) continue;
        for(int u = 2; u <= sqrt(vetor[i]); u++){
           if(vetor[i] % u == 0) apoio++; 
        }
        if(apoio == 0) printf("%i ", vetor[i]);
    }

    return 0;
}