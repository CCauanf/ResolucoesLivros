/*Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre seu sal�rio a receber,
sabendo-se que o funcion�rio tem gratifica��o de R$ 50 e paga imposto de 10% sobre o sal�rio base.*/

#include <stdio.h>

int main()
{
	
	float salario, alteracao;
	
	scanf("%f", &salario);
	alteracao = salario/100;
	salario = salario - (alteracao * 10);
	salario = salario + 50;
	
	printf("R$ %.2f", salario);
	return 0;
}
