#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    if(idade < 18) printf("Sem maioridade");
    else printf("Possui Maioridade");

    return 0;
}