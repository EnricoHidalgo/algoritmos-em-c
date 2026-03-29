/*
	Name: Triangulo.cpp
	Author: Enrico Hidalgo
	Date: 25/03/26 14:18
	Description: Programa para descobrir qual tipo de triângulo é de acordo com seu tamanho.
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float la, lb, lc;
	
	la = lb = lc = 0.0;
	
	puts(" Descubra qual tipo de triangulo é de acordo com o tamanho dos lados!");
	puts("x=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-x");
	
	printf("Informe o tamanho do lado A: ");
	scanf("%f",&la);
	printf("Informe o tamanho do lado B: ");
	scanf("%f",&lb);
	printf("Informe o tamanho do lado C: ");
	scanf("%f",&lc);
	
	if((la + lb > lc) && (la + lc > lb) && (lb + lc > la)){
		if(la == lb && lb == lc){
			printf("Todos os lados são iguais, o triangulo é equilátero!");
		}else if((la == lb) && (lb != lc) || (la == lc) && (lc != lb) || (la != lb) && (lb == lc)){
			printf("Um dos lados é diferente, o triangulo é isóceles!");
		} else{
			printf("Todos os lados são diferentes, o triangulo é escaleno!");
		}	
	}else{
		printf("Insira valores de um triangulo real.");
		return 0;
	}

}

