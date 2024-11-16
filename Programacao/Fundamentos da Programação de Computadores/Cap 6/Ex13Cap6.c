#include <stdio.h>

int main(){
    char nomes[8]; //Nomes serão representados por um único 
    //caractere devido à ainda não apresentação do assunto strings - Cáp.9

    float notas[8];
    float media = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite o nome do %io aluno: ", i + 1);
        scanf(" %c", &nomes[i]);
        printf("Digite a nota do %c: ", nomes[i]);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= 8;

    printf("Relatorio de notas\n");
    for(int i = 0; i < 8; i++){
        printf("%c %.2f\n", nomes[i], notas[i]);
    }
    printf("Media da classe = %.2f", media);


    return 0;
}