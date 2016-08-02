//Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o
//conteúdo das variáveis.

#include<stdio.h>

void main(){
	int x, y, aux;
	printf("Informe o valor de X: ");
	scanf("%d", &x);
	
	printf("Informe o valor de Y: ");
	scanf("%d", &y);
	
	aux = y;
	y = x;
	x = aux;

	printf("Valor do X: %d\n", x);
	printf("Valor do Y: %d\n", y);
}
