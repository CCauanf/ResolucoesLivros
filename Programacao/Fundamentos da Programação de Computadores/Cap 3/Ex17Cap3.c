#include <math.h>
#include <stdio.h>

int main() {
    float raio;
    float comprimento, area, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    comprimento = 2 * 3.1415 * raio;
    area = 3.14 * pow(raio, 2);
    volume = (3 * 3.1415 * pow(raio, 3)) / 4;

    printf("O valor do comprimento da esfera: %.2f\n", comprimento);
    printf("O valor da area da esfera: %.2f\n", area);
    printf("O valor do volume da esfera: %.2f", volume);

    return 0;
}
