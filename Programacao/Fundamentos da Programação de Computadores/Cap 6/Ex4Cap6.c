#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); //Definição da seed aleatória pelo horário do sistema
    int vetor[15];
    int apoioBool;

    for (int i = 0; i < 15; i++){
        vetor[i] = rand() % 100; //Povoamento com inteiros aleatórios de 0 a 100
    }

    printf("O numero 30 aparece nas posicoes: ");
    
    for(int i = 0; i < 15; i++){
        if(vetor[i] == 30){
            printf("%i", i);
            apoioBool = 1;
        }
    }

    if(apoioBool == 0) printf("Nenhum");

    return 0;
}