#include <stdio.h>

int main(){
    float idade, peso;
    int grupoRisco;

    printf("Digite a idade da pessoa: ");
    scanf("%f", &idade);
    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);

    if(idade < 20){
        if(peso < 60) grupoRisco = 9;
        else if (peso < 90) grupoRisco = 8;
        else grupoRisco = 7;
    } else if (idade < 50){
        if(peso < 60) grupoRisco = 6;
        else if (peso < 90) grupoRisco = 5;
        else grupoRisco = 4;
    } else {
        if(peso < 60) grupoRisco = 3;
        else if (peso < 90) grupoRisco = 2;
        else grupoRisco = 1;
    }

    printf("A pesso pertence ao grupo de risco: %i", grupoRisco);

    return 0;
}