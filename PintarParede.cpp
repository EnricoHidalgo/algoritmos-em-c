/*
	Name: PintarParede.cpp
	Author: Enrico Hidalgo
	Date: 06/03/26 23:14
	Description: Algoritmo que calcula quanto de tinta uma parede precisa
*/
//Sessão de importação
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	float alt, larg, area, tinta;
	char problema [50];
	
	alt = larg = area = tinta = 0;
	
	puts("Calcule o tanto de tinta que você usara pintando sua parede!");
	
	printf("Insira a altura da parede: ");
	scanf("%f",&alt);
	
	printf("Insira a largura da parede: ");
	scanf("%f",&larg);
	
	area = alt * larg;
	
	tinta = area / 2;
	
	printf("Sera usado %.2fL de tinta na área de %.2fM\n", tinta, area);
	
	if(tinta <= 15.0 ){
		printf("Uau, bastante tinta em");
	} else if (tinta >= 15.0){
		printf("Relate qual é seu problema mental: ");
		scanf("%s",&problema);
		printf("Ok, parabéns por ter: %s", problema);
	}
	else if(tinta <= 10.0) {
		printf("Vai econimizar bastante em");
	} 
	
	
}

