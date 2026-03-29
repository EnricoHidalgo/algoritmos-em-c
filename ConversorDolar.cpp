/*
	Name: ConversorDolar.cpp
	Author: Enrico Hidalgo
	Date: 06/03/26 20:28
	Description: Conversor de real para dólar
*/
//Sessão de importação
#include <stdio.h>
#include <locale>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float dol, real, convert;
	dol = 5.24;
	real = 0.0;
	convert = 0.0;
	
	printf("Insira quantos reais você quer converter: ");
	scanf("%f",&real);
	
	convert = dol * real;
	
	printf("\nR$%.2f em dólares é: $%.2f", real, convert);
	
}
