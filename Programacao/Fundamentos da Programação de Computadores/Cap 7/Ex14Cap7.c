#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[2][3];
    int apoioContador = 0;

    for(int i = 0; i < 2; i++){
        for(int u = 0; u < 3; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 2; i++){
        for(int u = 0; u < 3; u++){
            if(matriz[i][u] < 5 || matriz[i][u] > 15) apoioContador++;
        }
    }

    printf("A quantidade de elementos da matriz que nao pertencem ao intervalo [5,15]: %i", apoioContador);

    return 0;
}