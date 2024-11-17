#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[10][10];
    float media = 0;

    for(int i = 0; i < 10; i++){
        for(int u = 0; u < 10; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 10; i++){
        media += matriz[i][i];
    }
    media /= 10;

    printf("A media da diagonal principal da matriz e: %.2f", media);

    return 0;
}