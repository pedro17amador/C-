#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int v,r;
	
	printf("Digite o valor do raio:");
	scanf("%d",&r);
	v = (4*3.14*(r*r*r)/3);
	printf("O valor do volume da esfera é: %d",v);
	
	return 0;
}



