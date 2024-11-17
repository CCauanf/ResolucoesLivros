#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[2][4];
    int contadorLinha1= 0;
    int contadorLinha2 = 0;
    int contadorQtdPar = 0;
    int media = 0;

    for(int i = 0; i < 2; i++){
        for(int u = 0; u < 4; u++){
            matriz[i][u] = rand() % 100;
        }
    } 

    for(int i = 0; i < 2; i++){
        for(int u = 0; u < 4; u++){
            if(matriz[i][u] > 12 && matriz[i][u] < 20){
                if(i == 0) contadorLinha1++;
                else contadorLinha2++;
            }
            if(matriz[i][u] % 2 == 0) {
                media += matriz[i][u];
                contadorQtdPar++;
            }
        }
    }

    media /= contadorQtdPar;

    printf("Quantidade de elementos entre 12 e 20 na primeira linha: %i\n", contadorLinha1);
    printf("Quantidade de elementos entre 12 e 20 na segunda linha: %i\n", contadorLinha2);
    printf("Media dos elementos pares da matriz: %i", media);

    return 0;
}