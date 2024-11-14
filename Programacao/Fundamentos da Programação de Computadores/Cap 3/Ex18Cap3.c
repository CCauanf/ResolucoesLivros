#include <stdio.h>

int main() {
    float temperaturaCelsius;
    float temperaturaFahreinheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

    temperaturaFahreinheit = 180 * (temperaturaCelsius + 32) / 100;

    printf("A temperatura %.2f em Celsius representa %.2f em Fahreinheit", temperaturaCelsius,
           temperaturaFahreinheit);

    return 0;
}
