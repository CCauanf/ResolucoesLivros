#include <stdio.h>

int main(){
    char nomesAlunos[7];
    int mediaFinal[7];
    int apoio = 0, alunoMaiorMedia;

    for(int i = 0; i < 7; i++){
        printf("Digite o nome do aluno %i: ", i + 1);
        scanf(" %c", &nomesAlunos[i]);
        printf("Digite a media do aluno %i: ", i + 1);
        scanf(" %i", &mediaFinal[i]);
    }

    for (int i = 0; i < 7; i++){
        apoio = 0;
        for(int u = 0; u < 7; u++){
            if(i == u) continue;
            if(mediaFinal[i] > mediaFinal[u]) apoio++;
        }
        if(apoio == 6) alunoMaiorMedia = i;
    }

    printf("\nO aluno com maior media e: %c\n", nomesAlunos[alunoMaiorMedia]);

    for(int i = 0; i < 7; i++){
        if(mediaFinal[i] < 7) printf("O aluno %c precisa tirar %i na prova de exame final para ser aprovado!\n", 
        nomesAlunos[i], 10 - mediaFinal[i]);
    }
    

    return 0;
}