#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[6][4];
    int apoioContador;
    int apoioAcumulador;

    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 4; u++){
            matriz[i][u] = rand() % 100;
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 4; u++){
            apoioContador = 0;
            for(int j = 0; j < 4; j++){
                if(matriz[i][u] >= matriz[i][j]) apoioContador++;
            }
            if(apoioContador == 4) {
                apoioAcumulador = matriz[i][u];
                for(int j = 0; j < 4; j++){
                    matriz[i][j] *= apoioAcumulador;
                }
                break;
            }
        }
    }

    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 4; u++){
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }

    return 0;
}