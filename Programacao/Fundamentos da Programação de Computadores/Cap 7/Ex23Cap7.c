#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[3][4];
    int apoioAcumuladorPar = 0;
    int apoioImpar= 0;
    int media = 0;

    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 4; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 4; u++){
            if(matriz[i][u] % 2 == 0) apoioAcumuladorPar++;
            else apoioImpar += matriz[i][u];
            media += matriz[i][u];
        }
    }

    media /= 12;

    printf("A quantidade de elementos pares: %i\n", apoioAcumuladorPar);
    printf("A soma dos elementos impares: %i\n", apoioImpar);
    printf("A media de todos os elementos: %i\n", media);


   return 0; 

}