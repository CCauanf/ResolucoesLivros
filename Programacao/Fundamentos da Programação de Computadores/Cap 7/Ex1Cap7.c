#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int matriz[3][5];
    int quantidade = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    //
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(matriz[i][j] > 15 && matriz[i][j] < 20) quantidade++;
        }
    }

    printf("A quantidade de elementos entre 15 e 20 na matriz e: %i", quantidade);

    

    return 0;
}