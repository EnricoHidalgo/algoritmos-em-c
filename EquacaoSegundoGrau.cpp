/*
	Name: EquacaoSegundoGrau.cpp
	Author: Enrico Hidalgo
	Date: 06/03/26 22:49
	Description: Programa para realizar calculos de segundo grau
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>
#include <math.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	float a, b, c, delta, x1, x2;
	
	a = b = c = delta = x1 = x2 = 0;
	
	printf("Digite o valor de A: ");
	scanf("%f",&a);
	
	printf("Digite o valor de B: ");
	scanf("%f",&b);
	
	printf("Digite o valor de C: ");
	scanf("%f",&c);
	
	delta = (b * b) - 4 * a * c;
	
	printf("Delta tem o valor de: %f",delta);
	
	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);
	
	printf("\nO valor de x1 é: %.2f",x1);
	printf("\nO valor de x2 é: %.2f",x2);
	
}
