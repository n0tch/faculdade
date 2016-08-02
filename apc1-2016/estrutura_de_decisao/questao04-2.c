//Refaça o problema da questao 04 sem o uso de outras variáveis que
//não x e y.

#include<stdio.h>

void main(){
	int x, y;
	printf("Informe o valor de X: ");
	scanf("%d", &x);
	
	printf("Informe o valor de Y: ");
	scanf("%d", &y);

	x = x^y;
	y = x^y;
	x = x^y;

	printf("Valor do X: %d\n", x);
	printf("Valor do Y: %d\n", y);
}
