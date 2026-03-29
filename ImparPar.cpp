/*
	Name: ImparPar.cpp
	Author: Enrico Hidalgo
	Date: 12/03/26 18:44
	Description: Algoritmo para descobrir se o número é impar ou par
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1, quoc, resto;
	
	printf("Digite um número: ");
	scanf("%d",&n1);
	
	quoc = n1 / 2;
	resto = n1 - (quoc * 2);
		if (resto == 0){
			printf("Seu número é par!");
		} else {
			printf("Seu número é impar!");
		}
	
}

