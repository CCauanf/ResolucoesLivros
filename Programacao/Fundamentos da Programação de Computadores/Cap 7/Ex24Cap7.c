#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[4][5];
    int vetor[5] = {0};
    int apoioBool = 0;


    for(int i = 0; i < 4; i++){
        for(int u = 0; u < 5; u++){
            matriz[i][u] = rand() % 10;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 4; u++){
            vetor[i] += matriz[u][i];
        }
    }

    printf("Vetor: ");

    for(int i = 0; i < 5; i++) {
       if(vetor[i] > 10){
        printf("%i ", vetor[i]);
        apoioBool = 1;
       } 
    }
    if(apoioBool == 0) printf("Nao ha elementos no vetor maiores que 10!");

    return 0;

}