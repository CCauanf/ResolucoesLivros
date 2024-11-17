#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[6][3];
    int maiores[6];
    int menores[6];
    int posicoesMaiores[6][2];
    int posicoesMenores[6][2];
    int apoioContador = 0;

    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 3; u++){
            matriz[i][u] = rand() % 100;
            //printf("%i ", matriz[i][u]);
        }
        //printf("\n");
    }

    //printf("\n");

    for(int i = 0; i < 6; i++){
        for(int u = 0; u < 3; u++){
            apoioContador = 0;
            for(int j = 0; j < 3; j++){
                if(matriz[i][u] >= matriz[i][j]) apoioContador++;
            }
            if(apoioContador == 3){
                maiores[i] = matriz[i][u];
                posicoesMaiores[i][0] = i;
                posicoesMaiores[i][1] = u;
            }
            if(apoioContador == 1){
                menores[i] = matriz[i][u];
                posicoesMenores[i][0] = i;
                posicoesMenores[i][1] = u;
            }
        }
    }

    apoioContador = 0;

    for(int i = 0; i < 6; i++){
        apoioContador = 0;
        for(int u = 0; u < 6; u++){
            if(maiores[i] >= maiores[u]) apoioContador++;
        }
        if(apoioContador == 6)printf("O maior elemento da matriz e: %i na posicao %i-%i\n",
         maiores[i], posicoesMaiores[i][0],posicoesMaiores[i][1]);
        if(apoioContador == 1)printf("O menor elemento da matriz e: %i na posicao %i-%i\n", menores[i], posicoesMenores[i][0],
         posicoesMenores[i][1]);
    }



    return 0;
}