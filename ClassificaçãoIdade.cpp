/*
	Name: ClassificaçãoIdade.cpp
	Author: Enrico Hidalgo
	Date: 18/03/26 21:29
	Description: 
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	idade = 0;
	
	puts(" Programa para classificar sua idade!");
	puts("x====================================x");
	
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	
	if(idade <= 12){
		printf("Você é criança!");
	} else if(idade <=19){
		printf("Você é adolescente!");
	} else if(idade <= 60){
		printf("Você é adulto!");
	} else{
		printf("Você é idoso!");
	}
}
