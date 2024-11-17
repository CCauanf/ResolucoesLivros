#include <stdio.h>

int main(){
    float notas[15][5];
    float medias[15];
    float mediaClasse;
    char nomes[15]; //nomes serão tratados como caracteres únicos devido 
    //à ainda não apresentação do tema strings pelo livro

    for(int i = 0; i < 15; i++){
        printf("Digite o nome do aluno: ");
        scanf(" %c", &nomes[i]);

        for(int j = 0; j < 5; j++){
            printf("Digite a nota %i do aluno %c: ", j + 1, nomes[i]);
            scanf("%f", &notas[i][j]);
        }
    }

    for(int i = 0; i < 15; i++){
        for(int u = 0; u < 5; u++){
            medias[i] += notas[i][u];
        }
        medias[i] /= 5;
        mediaClasse += medias[i];
    } 

    mediaClasse /= 15;

    for(int i = 0; i < 15; i++){
        printf("O aluno %c, teve media %.2f e esta ", nomes[i], medias[i]);
        if(medias[i] > 5 && medias[i] <= 7) printf("de exame\n");
        else if (medias[i] > 7) printf("Aprovado\n");
        else printf("Reprovado\n");
    }

    printf("\nA media da classe foi: %.2f", mediaClasse);

    return 0;
}