#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, operacao;
    int resposta;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operacao que deseja realizar:\n");
    printf("1 - O primeiro numero elevado ao segundo numero\n");
    printf("2 - Raiz quadrada de cada um dos numeros\n");
    printf("3 - Raiz cubica de cada um dos numeros\n");
    printf("Escolha: ");
    scanf("%i", &resposta);
    printf("Resposta: ") ;
    
    switch(resposta){
        case 1: 
            operacao = pow(num1, num1);
            printf("%.2f", operacao);
            break;
        case 2:
            num1 = sqrt(num1);
            num2 = sqrt(num2);
            printf("Raiz do primeiro: %.2f\n", num1);
            printf("Raiz do segundo: %.2f", num2);
            break;
        case 3:
            num1 = cbrt(num1);
            num2 = cbrt(num2);
            printf("Raiz cubica do primeiro: %.2f\n", num1);
            printf("Raiz cubica do segundo: %.2f", num2);
            break;
        default: 
            printf("Digite uma opção valida!");
            return 0;
    }

    return 0;
}