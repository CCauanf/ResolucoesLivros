#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int vetor1[10];
    int vetor2[10];
    int vetor3[10];

    for(int i = 0; i < 10; i++){
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        vetor3[i] = vetor1[i] * vetor2[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%i ", vetor3[i]);
    }

    return 0;
}