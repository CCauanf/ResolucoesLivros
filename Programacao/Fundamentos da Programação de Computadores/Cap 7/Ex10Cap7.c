#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz[5][5];
    int apoioSoma = 0;

    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            matriz[i][u] = rand() % 10;
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }

    printf("\n");

    //
    printf("Soma dos elementos da linha 4: ");
    for(int i = 0; i < 5; i++){
        apoioSoma += matriz[3][i];
    }
    printf("%i\n", apoioSoma);
    //

    //
    printf("Soma dos elementos da coluna 2: ");
    apoioSoma = 0;
    for(int i = 0; i < 5; i++){
        apoioSoma += matriz[i][1];
    }
    printf("%i\n", apoioSoma);
    //

    //
    printf("Soma dos elementos da diagonal principal: ");
    apoioSoma = 0;
    for(int i = 0; i < 5; i++){
        apoioSoma += matriz[i][i];
    }
    printf("%i\n", apoioSoma);
    //

    //
    printf("Soma dos elementos da diagonal secundaria: ");
    apoioSoma = 0;
    for(int i = 0; i < 5; i++){
            apoioSoma += matriz[i][4 - i];
    }
    printf("%i\n", apoioSoma);
    //

    //
    printf("Soma de todos os elementos da matriz: ");
    apoioSoma = 0;
    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            apoioSoma += matriz[i][u];
        }
    }
    printf("%i", apoioSoma);

    return 0;
}