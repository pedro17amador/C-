#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int s,h,m,r1,r2;
	
	printf("\tPrograma que mostra algumas unidades de medida.");
	printf("\nDigite um valor em segundos:");
	scanf("%d",&s);
	
	r1 = s/3600;
	r2 = s/60;
	
	printf("Valor em horas: %d",r1);
	printf("\nValor em minutos: %d",r2);
	
	return 0;
}



