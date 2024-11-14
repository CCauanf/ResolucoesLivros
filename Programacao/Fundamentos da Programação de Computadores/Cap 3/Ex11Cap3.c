#include <stdio.h>

int main(){
    int dMaior, dMenor;
    int Tarea;

    printf("Calcular area de losango");

    printf("\nDigite o valor da diagonal maior: ");
    scanf("%i", &dMaior);

    printf("Digite o valor da diagonal menor: ");
    scanf("%i", &dMenor);

    Tarea = (dMaior*dMenor)/2;
    
    printf("A area do losango e: %i", Tarea);

    return 0;
}
