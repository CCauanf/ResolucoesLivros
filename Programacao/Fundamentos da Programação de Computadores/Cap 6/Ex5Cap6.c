#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); //Definição de seed aleatória pelo horário do sistema
    int numMatLogica[15];
    int numMatLP[10];
    int apoioBool;

    for(int i = 0; i < 15; i++){
        if(i < 10) numMatLP[i] = rand() % 100;
        numMatLogica[i] = rand() % 100;
    }

    printf("As matriculas que aparecem nos dois vetores sao: \n");

    for(int i = 0; i < 15; i++){
        for (int u = 0; u < 10; u++){
            if(numMatLogica[i] == numMatLP[u]){
                printf("%i\n", numMatLogica[i]);
                apoioBool = 1;
            } 
        }
    }

    if(apoioBool == 0) printf("Nenhum");


    return 0;
}