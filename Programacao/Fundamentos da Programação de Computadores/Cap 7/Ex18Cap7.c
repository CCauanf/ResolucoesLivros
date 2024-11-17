#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[5][5];
    float media = 0;

    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 5; i++){
        media += matriz[i][4 - i];
    }
    media /= 5;

    printf("Media da diagonal secundaria da matriz: %.2f", media);

    return 0;
}