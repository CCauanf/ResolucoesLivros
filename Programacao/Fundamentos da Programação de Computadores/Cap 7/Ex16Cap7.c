#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[5][5];
    int vetor1[5] = {0}, vetor2[5] = {0};

    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            vetor1[i] += matriz[i][u];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            vetor2[i] += matriz[u][i];
        }
    }

    //

    printf("Matriz: \n");

    for(int i = 0; i < 5; i++){
        for(int u = 0; u < 5; u++){
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }
    printf("\nVetor de soma das linhas da matriz: ");

    for(int i = 0; i < 5; i++) printf("%i ", vetor1[i]);
    printf("\nVetor de soma das colunas da matriz: ");
    for(int i = 0; i < 5; i++) printf("%i ", vetor2[i]);

    return 0;
}