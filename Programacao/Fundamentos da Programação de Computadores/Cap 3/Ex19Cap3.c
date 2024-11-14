#include <stdio.h>

int main() {
    float comprimento, largura;
    float potencia;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite a largura: ");
    scanf("%f", &largura);

    potencia = (comprimento * largura) / 18;

    printf("A potencia necessaria e de %.2fW", potencia);

    return 0;
}
