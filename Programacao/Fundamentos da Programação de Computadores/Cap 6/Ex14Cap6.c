#include <stdio.h>
//O exercício não esclarece o que "alunos de exame" significa
//supôs-se que a média para aprovação seja nota 5

int main(){
    char nomesAlunos[6];
    float notasProva1[6];
    float notasProva2[6];
    float media[6];
    float mediaClasse = 0, percentAprov = 0, percentExame = 0, percentReprov = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite o nome do %io aluno: ", i + 1);
        scanf(" %c", &nomesAlunos[i]);
        printf("Digite a nota da 1a prova de %c: ", nomesAlunos[i]);
        scanf("%f", &notasProva1[i]);
        printf("Digite a nota da 2a prova de %c: ", nomesAlunos[i]);
        scanf("%f", &notasProva2[i]);
    }
 
    //Média da classe
    for(int i = 0; i < 6; i++){media[i] = (notasProva1[i] + notasProva2[i])/2;}

    for(int i = 0; i < 6; i++){mediaClasse += media[i];}
    mediaClasse /= 6;

    //Percentual de alunos aprovados
    for(int i = 0; i < 6; i++){if(media[i] >= 5) percentAprov++;}
    percentAprov = (percentAprov / 6) * 100;

    //Percentual de alunos reprovados
    for(int i = 0; i < 6; i++){if(media[i] < 5) percentReprov++;}
    percentReprov = (percentReprov/6) * 100;

    printf("\n");

    //Exibição do relatório
    printf("ALUNO\t1a PROVA\t2a PROVA\tMEDIA\tSITUACAO\n");
    for(int i = 0; i < 6; i++){
        printf("%c\t   %.2f\t\t   %.2f\t\t   %.2f\t", nomesAlunos[i], notasProva1[i], notasProva2[i],
        media[i]);
        if(media[i] >= 5) printf("Aprovado\n");
        else printf("Reprovado\n");
    }

    printf("\nMedia da classe = %.2f", mediaClasse);
    printf("\nPercentual de alunos aprovados = %.2f", percentAprov);
    printf("\nPercentual de alunos reprovados = %.2f", percentReprov);

    return 0;
}