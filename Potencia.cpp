/*
	Name: Potencia.cpp
	Author: Enrico Hidalgo
	Date: 26/03/26 17:15
	Description: Programa para calcular potência
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguse");
	int base, exp, aux;
	base = exp = aux = 0;
	
	printf("Digite base: ");
	scanf("%d",&base);
	printf("Digite expoente: ");
	scanf("%d",&exp);
	aux = base;
	
	do{
		base = aux * base;
		exp = exp - 1;
	} while (exp != 1);
	
	printf("result: %d ",base);
	
	
}
