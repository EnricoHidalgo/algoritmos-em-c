/*
	Name: VidaFumante.cpp
	Author: Enrico Hidalgo
	Date: 08/03/26 13:34
	Description: Programa para calcular a redução do tempo de vida de um fumante
*/

//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float cig, dias, anos, min, ano, result;
	cig = anos = result = 0;
	min = 10;
	ano = 365;
	
	printf("Insira quantidade de cigarros fumados por dia: ");
	scanf("%f",&cig);
	
	printf("Insira quantos anos você fuma: ");
	scanf("%f",&anos);
	
	
	result = anos * cig * ano * min / 1440;
	
	printf("Você perdeu %.2f dias de vida.", result);
	
	
}
