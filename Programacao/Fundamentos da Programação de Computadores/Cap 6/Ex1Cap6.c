#include <stdio.h>

int main(){
    int numeros[6];
    int pares = 0, impares = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite o elemento %i do vetor: ", i);
        scanf("%i", &numeros[i]);
    }

    printf("Os numeros pares sao: ");

    for(int i = 0; i < 6; i++){
        if(numeros[i] % 2 == 0){
            printf("%i ", numeros[i]);
            pares++; 
        }
    }
    printf("\nA quantidade de pares e: %i", pares);

    printf("\nOs numeros impares sao: ");

    for(int i = 0; i < 6; i++){
        if(numeros[i] % 2 != 0){
            printf("%i ", numeros[i]);
            impares++;
        }
    }

    printf("\nA quantidade de impares e: %i", impares);



    return 0;
}