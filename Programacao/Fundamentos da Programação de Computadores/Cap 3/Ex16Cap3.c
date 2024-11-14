#include <stdio.h>
#include <math.h>

int main(){

    int cateto1, cateto2;
    float hipotenusa;

    printf("Calcular valor da hipotenusa\n");

    printf("Digite o valor do primeiro cateto: ");
    scanf("%i", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%i", &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("O valor da hipotenusa e: %.2f", hipotenusa);



    return 0;
}
