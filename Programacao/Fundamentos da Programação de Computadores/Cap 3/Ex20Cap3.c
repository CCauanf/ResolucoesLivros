#include <stdio.h>
#include <math.h>
#define Pi 3.1416

int main(){
    int angulo, distancia;
    int medEscada;

    printf("Digite a medida do angulo: ");
    scanf("%i", &angulo);

    printf("Digite a distancia que a escada esta da parede: ");
    scanf("%i", &distancia);
    
    medEscada = sin(angulo*Pi/180) * distancia;

    printf("A medida da escada e: %i", medEscada);

    return 0;
}
