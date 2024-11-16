#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vetor1[10];
    int vetor2[5];
    int vetorRes1[10];
    int vetorRes2[10];
    int somaVetor2 = 0;
    int contadorImpares;
    int apoioContador1 = 0;
    int apoioContador2 = 0;

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        if(i < 5){
            vetor2[i] = rand() % 20;
            somaVetor2 += vetor2[i];
        } 
        vetor1[i] = rand() % 20;
    }

    /* Debug para exibir o vetor
    for(int i = 0; i < 10; i++){ printf("%i ", vetor1[i]);}
    printf("\n\n");
    for(int i = 0; i < 5; i++){ printf("%i ", vetor2[i]);}
    printf("\n\n");
    */

    //vetorRes1
    for(int i = 0; i < 10; i++){
        if(vetor1[i] % 2 == 0){
            vetorRes1[apoioContador1] = vetor1[i] + somaVetor2;
            apoioContador1++;
        }
    }

    //vetorRes2
    for(int i = 0; i < 10; i++){
        contadorImpares = 0;
        for(int u = 0; u < 5; u++){
            if(vetor1[i] % 2 != 0 && vetor1[i] % vetor2[u] == 0){
                contadorImpares++;
            }
        }
        if(vetor1[i] % 2 != 0){
            vetorRes2[apoioContador2] = contadorImpares;
            apoioContador2++;
        }
   }

    //Imprimir vetor

    printf("Vetores finais: \n");

    printf("Vetor 1: ");
    for(int i = 0; i < apoioContador1; i++){
        printf("%i ", vetorRes1[i]);
    }
    
    printf("\nVetor 2: ");
    for(int i = 0; i < apoioContador2; i++){
        printf("%i ", vetorRes2[i]);
    }

    return 0;
}