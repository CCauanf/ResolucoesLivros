/*Fa�a um programa que calcule e mostre a �rea de um c�rculo. Sabe-se que: �rea = p * R2*/
#include <stdio.h>

int main()
{
	
	float area, raio;
	
	printf("Digite o raio:");
	scanf("%f", &raio);
	area = 3.1415 * (raio*raio);
	
	printf("%.2f", area);
	return 0;
}

