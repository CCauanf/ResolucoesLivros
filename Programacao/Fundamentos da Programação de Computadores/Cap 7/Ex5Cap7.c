#include <stdio.h>

int main(){
    float valVendas[12][4];
    float apoio;

    for(int i = 0; i < 12; i++){
        for(int u = 0; u < 4; u++){
            printf("\nDigite o valor vendido no mes %i na semana %i: ", i + 1, u + 1);
            scanf("%f", &valVendas[i][u]);
        }
    }

    printf("Total vendido em cada mes do ano: ");

    for(int i = 0; i < 12; i++){
        printf("\n\t");
        printf("Total vendido em ");

        apoio = 0;
        for(int u = 0; u < 4; u++){
            apoio+= valVendas[i][u];
        }
        switch (i + 1){
        case 1: 
            printf("Janeiro: %.2f", apoio);
            break;
        case 2:
            printf("Fevereiro: %.2f", apoio);
            break;

        case 3:
            printf("Marco: %.2f", apoio);
            break;

        case 4:
            printf("Abril: %.2f", apoio);
            break;

        case 5:
            printf("Maio: %.2f", apoio);
            break;

        case 6:
            printf("Junho: %.2f", apoio);
            break;

        case 7:
            printf("Julho: %.2f", apoio);
            break;

        case 8:
            printf("Agosto: %.2f", apoio);
            break;

        case 9:
            printf("Setembro: %.2f", apoio);
            break;

        case 10:
            printf("Outubro: %.2f", apoio);
            break;

        case 11:
            printf("Novembro: %.2f", apoio);
            break;

        case 12:
            printf("Dezembro: %.2f", apoio);
            break;
        
        default:
            break;
        }
    } 

    printf("\n");
    apoio = 0;

    for(int i = 0; i < 4; i++){
        apoio = 0;
        for(int u = 0; u < 12; u++){
            apoio += valVendas[u][i];
        }
        printf("O total vendido nas semanas %i e: %.2f\n", i + 1, apoio);
    }

    printf("\n");

    apoio = 0;

    for(int i = 0; i < 12; i++){
        for (int u = 0; u < 4; u++){
            apoio += valVendas[i][u];
        } 
    }
    printf("O total vendido no ano e: %.2f", apoio);


    return 0;
}