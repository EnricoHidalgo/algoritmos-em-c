/*
	Name: Calculadora.cpp
	Author: Enrico Hidalgo
	Date: 25/03/26 13:38
	Description: Programa com função de calculadora para números inteiros.
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, result;
	char oper;
	
	n1 = n2 = result = 0;
	
	puts("Calculadora: Utilize A (adição), S (subtração), M (multiplicação) ou D (divisão) para realizar suas respectivas operações!");
	puts("\n");
	
	printf("Insira qual operação você deseja realizar: ");
	scanf(" %c",&oper);
	
	printf("Insira o primeiro número: ");
	scanf("%d",&n1);
	printf("Insira o segundo número: ");
	scanf("%d",&n2);
	
	if(oper == 'a' || oper == 'A'){
		result = n1 + n2;
	}else if(oper == 's' || oper == 'S'){
		result = n1 - n2;
	}else if(oper == 'm' || oper == 'M'){
		result = n1 * n2;
	}else if(oper == 'd' || oper == 'D'){
		if(n2 == 0){
			printf("Um valor não pode ser dividido por zero.");
			return 0;
		}else{
			result = n1 / n2;
		}
	}else{
		printf("Insira um operador válido.");
		return 0;
	}
	
	printf("O resultado da operação é: %d",result);
}
