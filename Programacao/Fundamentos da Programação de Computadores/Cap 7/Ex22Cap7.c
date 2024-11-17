#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[6][10];
    int apoioAcumulador = 0;

    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 10; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 10; i++){
        apoioAcumulador = 0;
        for(int u = 0; u < 6; u++){
            apoioAcumulador += matriz[u][i];
        }
        matriz[5][i] = apoioAcumulador;
    }

    for(int i = 0; i < 10; i++){
        printf("%i ", matriz[5][i]);
    }

    return 0;
}