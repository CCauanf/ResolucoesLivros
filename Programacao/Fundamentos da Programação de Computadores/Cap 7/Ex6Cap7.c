#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int matriz[20][10];
    int somaColunas[10];

    for(int i = 0; i < 20; i++){
        for(int u = 0; u < 10; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 10; i++){
        for(int u = 0; u < 20; u++){
            somaColunas[i] = matriz[u][i];
        }
    }

    for(int i = 0; i < 20; i++){
        for(int u = 0; u < 10; u++){
            matriz[i][u] *= somaColunas[u];
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }



    return 0;
}