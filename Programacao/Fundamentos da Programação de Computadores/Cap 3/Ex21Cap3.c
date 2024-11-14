#include <stdio.h>

int main() {
    int horasT, horasExT;
    float salarioMin, salReceber;

    float valHorasT, valHorasExT, salBruto, recHorasExT;
    
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%i", &horasT);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMin);

    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%i", &horasExT);

    //a)
    valHorasT = 0.125 * salarioMin;
    //b)
    valHorasExT = 0.25 * salarioMin;
    //c)
    salBruto = horasT * valHorasT;
    //d)
    recHorasExT = horasExT * valHorasExT;
    //e)
    salReceber = salBruto + recHorasExT;

    printf("O salario a receber e de %.2f", salReceber);

        return 0;
}
