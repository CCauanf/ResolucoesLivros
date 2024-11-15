#include <stdio.h>

int main(){
    float num1, num2, operacao;
    int resposta;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operacao que deseja realizar:\n");
    printf("1 - Media entre os numeros digitados\n");
    printf("2 - Diferenca do maior pelo menor\n");
    printf("3 - Produto entre os numeros digitados\n");
    printf("4 - Divisao do primeiro pelo segundo\n");
    printf("Escolha: ");
    scanf("%i", &resposta);
    printf("Resposta: ") ;
    
    switch(resposta){
        case 1: 
            operacao = (num1 + num2) / 2;
            break;
        case 2:
            if(num1 > num2) operacao = num1 - num2; 
            else operacao = num2 - num1;
            break;
        case 3:
            operacao = num1 * num2;
            break;
        case 4:
            operacao = num1 / num2;
            break;
        default: 
            printf("Digite uma opção valida!");
            return 0;
    }

    printf("%.2f", operacao);

    return 0;
}