/*
	Name: AntecessorSucessor.cpp
	Author: Enrico Hidalgo
	Date: 06/03/26 19:14
	Description: Programa para mostrar o antecessor e o sucessor de um número
*/

//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	int n1, suc, ant;
	
	n1 = 0; suc = 0; ant = 0;
	
	puts(" Descubra o antecessor e sucessor de um número!");
	puts("x==============================================x");
	
	printf("Digite o número: ");
	scanf("%d",&n1);
	
	suc = n1 + 1;
	ant = n1 - 1;
	

	
	printf("O sucessor de %d é: %d",n1, suc);
	printf("\nO antecessor de %d é: %d",n1, ant);
}
