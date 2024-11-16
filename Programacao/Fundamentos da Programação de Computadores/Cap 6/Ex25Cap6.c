#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int vetor[15];
    int apoio;
    int buffer;

    for(int i = 0; i < 15; i++){vetor[i] = rand() % 100; printf("%i ", vetor[i]);}
    printf("\n");

    for(int i = 0; i < 15; i++){
        apoio = 0;
        for(int u = 0; u < 15; u++){
            if(i == u) continue;
            if(vetor[i] >= vetor[u]) apoio++;
        }
        if(apoio == 14){
            buffer = vetor[i];
            break;
        } 
    }
    printf("\n%i\n", buffer);

    for(int i = 0; i < 15; i++){
        vetor[i] /= buffer;
    }

    printf("Vetor final: ");

    for(int i = 0; i < 15; i++){
        printf("%i ", vetor[i]);
    }

    return 0;
}