/*Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura)/2.*/
#include <stdio.h>

int main()
{
	
	float base, altura, area;
	
	printf("Digite a base e altura:");
	scanf("%f %f", &base, &altura);
	area = (base * altura)/2;
	
	printf("%.2f", area);
	return 0;
}

