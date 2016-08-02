#include<stdio.h>

void main(){
	int n1,n2,n3,n4, aux;

	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);

	printf("Informe o segundo numero: ");
	scanf("%d", &n2);

	printf("Informe o terceiro numero: ");
	scanf("%d", &n3);

	printf("Informe o quarto numero: ");
	scanf("%d", &n4);

	if(n1 < n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}

	if(n2 < n3){
		aux = n2;
		n2 = n3;
		n3 = aux;
	}

	if(n1 < n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}

	if(n4 > n3){
		aux = n4;
		n4 = n3;
		n3 = aux;
	}

	if(n3 > n2){
		aux = n3;
		n3 = n2;
		n2 = aux;
	}

	if(n2 > n1){
		aux = n2;
		n2 = n1;
		n1 = aux;
	}

	printf("Ordem decrescente: %d %d %d %d\n", n1,n2,n3, n4);
}
