#include <stdio.h>

int main(){
    int numHorasExt, numHorasFalta, premio;
    float H;

    printf("Digite o numero de horas extras do funcionario: ");
    scanf("%i", &numHorasExt);
    printf("Digite o numero de horas que o funcionario faltou ao trabalho: ");
    scanf("%i", &numHorasFalta);

    H = numHorasExt - (0.67 * numHorasFalta);

    if(H >= 2400) premio = 500; 
    else if(H > 1800) premio = 400;
    else if (H >= 1200) premio = 300;
    else if (H >= 600) premio = 200;
    else premio = 100;

    printf("O valor do premio e de: %i", premio);

    return 0;
}