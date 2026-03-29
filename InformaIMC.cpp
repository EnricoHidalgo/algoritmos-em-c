/*
	Name: InformaIMC.cpp
	Author: Enrico Hidalgo
	Date: 18/03/26 22:41
	Description: Programa para informar nível do IMC do usuário
*/
//Sessão de Importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float peso, alt, imc;
	peso = 0; alt = 0; imc = 0;
	
	puts(" Programa para informar seu nível de IMC!");
	puts("x========================================x");
	
	printf("Informe seu peso: ");
	scanf("%f",&peso);
	
	printf("Informe sua altura: ");
	scanf("%f",&alt);
	
	imc = peso / (alt * alt);
	
	if(imc <= 16){
		printf("Seu IMC é: %.2f. Você está em estágio de: Magreza grave.", imc);
	} else if(imc <= 17){
		printf("Seu IMC é: %.2f. Você está em estágio de: Magreza moderada.", imc);
	} else if(imc <= 18.5){
		printf("Seu IMC é: %.2f. Você está em estágio de: Magreza leve.", imc);
	}else if(imc <= 25){
		printf("Seu IMC é: %.2f. Você está em estágio de: Saudável.", imc);
	}else if(imc <= 30){
		printf("Seu IMC é: %.2f. Você está em estágio de: Sobrepeso.", imc);
	}else if(imc <= 35){
		printf("Seu IMC é: %.2f. Você está em estágio de: Obesidade Grau I.", imc);
	}else if(imc <= 40){
		printf("Seu IMC é: %.2f. Você está em estágio de: Obesidade Grau II (considerada severa).", imc);
	}else{
		printf("Seu IMC é: %.2f. Você está em estágio de: Obesidade Grau III (considerada mórbida).", imc);
	}
}
