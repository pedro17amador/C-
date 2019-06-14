#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	double r,h,area;
	
	printf("\tCalculo da área da lata.");	
	printf("\nDigite o valor da altura da lata: ");
	scanf("%d",&h);
	printf("Digite o valor do raio da lata: ");
	scanf("%d",&r);
	
	area = 2*(3.14*r*h);
	
	printf("O valor da área da lata é: %d",area);
	
	return 0;
}



