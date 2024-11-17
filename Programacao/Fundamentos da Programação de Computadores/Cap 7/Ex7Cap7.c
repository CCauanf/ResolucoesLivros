#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int M[4][6];
    int N[6][4];
    int soma = 0;

    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 6; u++){
            if(i < 4) {
                M[i][u] = rand() % 100;
            }
            if(u < 4){
                N[i][u] = rand() % 100;
            }
        }
    }

    for(int i = 0; i < 4; i++){
        for(int u = 0; u < 6; u++){
            soma += M[i][u] + N[u][i];
        }
    }

    printf("A soma e: %i", soma);

    return 0;
}