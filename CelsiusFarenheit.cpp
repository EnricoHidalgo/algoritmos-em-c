/*
	Name: CelsiusFarenheit.cpp
	Author: Enrico Hidalgo
	Date: 18/03/26 20:58
	Description: Programa para converter Celsius para Farenheit
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){	
	float cel, far;
	cel = 0; far = 0;
	setlocale(LC_ALL,"Portuguese");
	
	puts(" Converta celsius para fahrenheit!");
	puts("x=================================x");
	
	printf("Insira a quantidade de graus celsius: ");
	scanf("%f",&cel);
	
	far = (cel * 9/5) + 32;
	
	printf("a conversão de %.2f°C em farenheit é: %.2f°C",cel, far);
}
