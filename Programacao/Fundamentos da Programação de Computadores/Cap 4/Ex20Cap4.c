#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%i", &idade);

    printf("A categoria e: ");

    if(idade < 5) printf("Nao ha categoria");
    else if (idade <= 7) printf("Infantil");
    else if (idade <= 10) printf("Juvenil");
    else if (idade <= 15) printf("Adolescente");
    else if (idade <= 30) printf("Adulto");
    else printf("Senior");

    return 0;
}