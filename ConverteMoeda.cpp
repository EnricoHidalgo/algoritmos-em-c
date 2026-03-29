/*
	Name: ConverteMoeda.cpp
	Author: Enrico Hidalgo
	Date: 24/03/26 11:55
	Description: Programa para converter real para outras moedas (Dólar, Euro e Iene)
*/
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float dolar, real, iene, euro;
	char moeda;
	
	real = dolar = iene = euro = 0.0;
	moeda = ' ';
	
	puts("Converta real para Dólar, Euro ou Iene.");
	puts("==========================================================================");
	puts("Para escolher a moeda, utilize: D para Dólar, E para Euro ou I para Iene!");
	
	printf("\nColoque o valor em reais: ");
	scanf("%f",&real);
	
	printf("Selecione a moeda para qual você quer converter: ");
	scanf(" %c",&moeda);
 
 	if(moeda == 'd' || moeda == 'D'){
 		dolar = real / 5.27;
 		printf("R$%.2f em dólares é: U$%.2f.",real, dolar);
	 } else if( moeda == 'e' || moeda == 'E'){
	 	euro = real / 6.11;
	 	printf("R$%.2f em euros é: €%.2f.",real, euro);
	 } else if(moeda == 'i' || moeda == 'I'){
	 	iene = real / 30.10;
		printf("R$%.2f em Iene é: ¥%.2f.",real, iene);
	 } else{
	 	printf("Informe um caracter válido.");
	 	return 0;
	 }
	
	
}
