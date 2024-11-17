#include <stdio.h>

int main(){
    int idades[8];
    int codDisciplinas[5];
    int codAlunos[8];
    int qtdProvas[8][5];
    int apoioResposta;
    int apoioBool;
    int apoioContador;
    float media;

    //EX11 - CADASTROS
    for(int i = 0; i < 8; i++){
        printf("Digite o codigo do %io aluno: ", i + 1);
        scanf("%i", &codAlunos[i]);
        printf("Digite a idade do %io aluno: ", i + 1);
        scanf("%i", &idades[i]);
    } 

    for(int i = 0; i < 5; i++){
        printf("Digite o codigo da %ia disciplina: ", i + 1);
        scanf("%i", &codDisciplinas[i]);
    }

    for(int i = 0; i < 8; i++){
        for(int u = 0; u < 5; u++){
            printf("Digite a quantidade de provas que o aluno %i fez na materia %i: ", i + 1, u + 1);
            scanf("%i", &qtdProvas[i][u]);
        }
    }

    //EX12 - CÁLCULOS

    //
    printf("Digite o codigo da disciplina a ser consultada a quantidade de alunos com idade entre 18 e 25 anos que fizeram mais de duas provas: ");
    scanf("%i", &apoioResposta);

    apoioContador = 0;

    for(int i = 0; i < 5; i++){
        if(apoioResposta == codDisciplinas[i]){
            apoioBool = 1;
            for(int u = 0; u < 8; u++){
                if(idades[u] > 18 && idades[u] < 25){
                    for(int j = 0; j < 8; j++){
                        if(qtdProvas[j][i] >= 2) apoioContador++;
                    }
                }
            }

        }
    }

    if(apoioBool == 0) printf("ERRO - CODIGO DE DISCIPLINA NAO CADASTRADO!");
    else printf("Quantidade de alunos com idade entre 18 e 25 anos que fizeram mais de duas provas na disciplina: %i\n", apoioContador);
    //

    //
    printf("Alunos que fizeram menos de 3 provas em cada disciplina: \n");
    for(int i = 0; i < 5; i++){
        printf("Disciplina %i:\n", codDisciplinas[i]);
        for(int u = 0; u < 8; u++){
            if(qtdProvas[u][i] < 3) printf("\tAluno %i\n", codAlunos[u]);
        }
    }
    //

    media = 0;
    apoioContador = 0;

    for(int i = 0; i < 8; i++){
        for(int u = 0; u < 5; u++){
            if(qtdProvas[i][u] == 0){
                media += idades[i];
                apoioContador++;
                break;
            }
        }
    }

    media /= apoioContador;

    printf("Media de idade dos alunos que nao fizeram nenhuma prova em alguma disciplina: %.2f", media);
    //

    return 0;
}