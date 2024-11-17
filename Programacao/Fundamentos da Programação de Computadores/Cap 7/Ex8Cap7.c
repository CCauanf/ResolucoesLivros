#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz1[3][8];
    int matriz2[3][8];
    int soma[3][8];
    int diferenca[3][8];

    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 8; u++){
            matriz1[i][u] = rand() % 100;
            matriz2[i][u] = rand() % 100;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 8; u++){
            soma[i][u] = matriz1[i][u] + matriz2[i][u];
            diferenca[i][u] = matriz1[i][u] - matriz2[i][u];
        }
    }

    printf("Matriz soma: \n");
    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 8; u++){
            printf("%i ", soma[i][u]);
        }
        printf("\n");
    }

    printf("Matriz diferenca: \n");
    for(int i = 0; i < 3; i++){
        for(int u = 0; u < 8; u++){
            printf("%i ", diferenca[i][u]);
        }
        printf("\n");
    }

    return 0;
}