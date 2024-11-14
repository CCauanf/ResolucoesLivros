#include <stdio.h>

int main(){
    int numeroLados;
    int diagonais;

    printf("Digite o numero de lados do poligono convexo: ");
    scanf("%i", &numeroLados);

    diagonais = numeroLados * (numeroLados - 3)/2;

    printf("O numero de diagonais deste poligono convexo e: %i", diagonais);

    return 0;
}