/*
	Name: IdadeEmDias.cpp
	Author: Enrico Hidalgo
	Date: 18/03/26 21:15
	Description: Programa para calcular quantos dias de vida usuário tem
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int anos, meses, dias, result;
	
	anos = 0; meses = 0; dias = 0; result = 0;
	
	puts(" Programa para calcular sua idade em dias!");
	puts("x=========================================x");
	
	puts("Informe sua idade, seus meses e dias de vida a seguir:");
	
	printf("\nIdade: ");
	scanf("%d",&anos);
	
	printf("Meses: ");
	scanf("%d",&meses);
	
	printf("Dias: ");
	scanf("%d",&dias);
	
	result = (anos * 365) + (meses * 30) + dias;
	
	printf("Você tem %d dias de vida!", result);
}
