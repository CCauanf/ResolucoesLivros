#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[12][13];
    int apoioAcumulador;
    int apoioContador;

    for(int i = 0; i < 12; i++){
        for(int u = 0; u < 13; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 12; i++){
        for(int u = 0; u < 13; u++){
            apoioContador = 0;
            for(int j = 0; j < 13; j++){
                if(matriz[i][u] >= matriz[i][j]) apoioContador++;
            }
            if(apoioContador == 4) {
                apoioAcumulador = abs(matriz[i][u]);
                for(int j = 0; j < 13; j++){
                    matriz[i][j] /= apoioAcumulador;
                }
                break;
            }
        }
    }

    for(int i = 0; i < 12; i++){
        for(int u = 0; u < 13; u++){
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }


    return 0;
}