/*Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,
sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% tam-
b�m sobre o sal�rio base.*/

#include <stdio.h>

int main()
{
	float salario, alteracao;
	
	scanf("%f", &salario);
	alteracao = salario/100;
	salario = salario + (alteracao * 5);
	salario = salario - (alteracao * 7);
	
	printf("R$ %.2f", salario);
	return 0;
}
