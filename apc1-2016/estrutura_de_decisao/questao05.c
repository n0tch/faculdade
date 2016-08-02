//5. Faça um programa que leia o valor da base e altura de um triângulo e calcule o
//valor da sua área.

#include<stdio.h>

void main(){
	int base, altura, area;
	printf("Informe o valor da base: ");
	scanf("%d", &base);

	printf("Informe o valor da altura: ");
	scanf("%d", &altura);

	area = (base*altura)/2;

	printf("A area do triangulo informado eh de: %d\n", area);

}
