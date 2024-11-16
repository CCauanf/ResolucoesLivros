#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int vetor1[10];
    int vetor2[10];
    int vetor3[20];
    int buffer;
    int apoioBool = 0;

    for(int i = 0; i < 10; i++){
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100;
    }

    //Concatenação
    for(int i = 0; i < 20; i++){
        if(i < 10) vetor3[i] = vetor1[i];
        else vetor3[i] = vetor2[i - 10];
    }

    //Bubble sort O(n^2)
    while(1){
        apoioBool = 0;
        for(int i = 0; i < 19; i++){
            if(vetor3[i] < vetor3[i + 1]){
            //swap
                buffer = vetor3[i];
                vetor3[i] = vetor3[i + 1];
                vetor3[i + 1] = buffer;
            //
                apoioBool++;
            }
        }
        if(apoioBool == 0) break;
    }

    //Imprimir
    printf("Vetor3: ");
    for(int i = 0; i < 20; i++){
        printf("%i ", vetor3[i]);
    }

    return 0;
}

