#include <stdio.h>

int main() {
    int ndia, nmes, nano;
    int anoAtual;
    int idadeAnos, idadeMeses, idadeDias, idadeSemanas;

    printf("Digite sua data de nascimento (D M A): ");
    scanf("%i %i %i", &ndia, &nmes, &nano);

    printf("Digite o ano atual: ");
    scanf("%i", &anoAtual);

    idadeAnos = (anoAtual - nano) - 1;
    idadeMeses = idadeAnos * 12 + nmes;
    idadeDias = idadeMeses * 30 + ndia;
    idadeSemanas = idadeDias / 4;

    printf("\nIdade em anos: %i", idadeAnos);
    printf("\nIdade em meses: %i", idadeMeses);
    printf("\nIdade em dias: %i", idadeDias);
    printf("\nIdade em semanas: %i", idadeSemanas);

    return 0;
}
