/*
10. Escreva um programa lê três números e imprime o maior deles.
*/

#include<stdio.h>

void main(){
	int a, b, c;
	printf("Infome o primeiro numero: ");
	scanf("%d", &a);
	printf("Informe o segudo numero: ");
	scanf("%d", &b);
	printf("Informe o terceiro numero: ");
	scanf("%d", &c);

	if((a > b) && (a > c)){
		printf("O maior numero eh: %d", a);
	}else if((b > a) && (b > c)){
		printf("O maior numero eh: %d", b);
	}else{
		printf("O maior numero eh: %d", c);
	}

	printf("\n");
}
