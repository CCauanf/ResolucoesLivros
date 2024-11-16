#include <stdio.h>

int main(){
    int numeros[5];
    int total = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o %io numero: ", i + 1);
        scanf("%i", &numeros[i]);
        total += numeros[i];
    }

    printf("Os numeros digitados foram: ");

    for(int i = 0; i < 4; i++){
        printf("%i + ", numeros[i]);
    }

    printf("%i = %i", numeros[4], total);

    return 0;
}