#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[3][3];
    int numero;

    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 3; u++){
            matriz[i][u] = rand() % 100;
        }
    }

    printf("Digite um valor numerico: ");
    scanf("%i", &numero);

    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 3; u++){
            matriz[i][u] *= numero;
        }
    }

    printf("Matriz final\n");

    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 3; u++){
            printf("%i ", matriz[i][u]);
        }
        printf("\n");
    }

    return 0;
}