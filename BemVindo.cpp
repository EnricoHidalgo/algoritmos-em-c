/*
	Name: BemVindo.cpp
	Author: Enrico Hidalgo
	Date: 06/03/26 19:27
	Description: Programa que leia o nome de uma pessoa e mostre uma mensagem de boas-vindas para ela
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	char nome[50];
	
	printf("Olá, qual é seu nome?");
	scanf("%s",nome);
	
	printf("\nSeja bem-vindo(a) %s",nome);
	
	
}
