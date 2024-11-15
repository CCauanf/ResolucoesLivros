#include <stdio.h>

int main(){
    float altura;
    char sexo;
    float pesoIdeal;

    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o sexo (M/F): ");
    scanf("%c", &sexo);

    if (sexo == 'M') pesoIdeal = (72.7 * altura) - 58;
    else pesoIdeal = (62.1 * altura) - 44.7;

    printf("O peso ideal e de: %.2f", pesoIdeal);

    return 0;
}