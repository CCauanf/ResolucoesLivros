#include <stdio.h>

int main(){
    int senha;

    printf("Digite a senha: ");
    scanf("%i", &senha);

    if(senha != 4531) printf("Acesso negado!");
    else printf("Acesso aprovado!");

    return 0;
}