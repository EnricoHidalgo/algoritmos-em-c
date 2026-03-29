/*
	Name: CNH.cpp
	Author: Enrico Hidalgo
	Date: 25/03/26 14:09
	Description: Programa para identificar se tem idade necessária para ter a CNH.
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	idade = 0;
	
	puts(" Programa para informar se você já tem a idade necessária para ter CNH.");
	puts("x=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-x");
	
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	
	if(idade >= 18){
		printf("Idade permitida para tirar CNH.");
	}else{
		printf("Idade não permitida para tirar CNH.");
	}
}
