#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	double medida,mt,dc,ml,r1,r2,r3;

	printf("\tPrograma para apresentar medidas.");
	printf("\nDigite um valor em centimetros:");
	scanf("%d",&medida);
	
	r1 = medida/100;
	r2 = medida/10;
	r3 = medida/0.1000;
	
	printf("O valor dessa medida em metros é: %d",r1);
	printf("\nO valor dessa medida em decímetros é: %d",r2);
	printf("\nO valor dessa medida em milimetros é: %d",r3);
		
	return 0;
}



