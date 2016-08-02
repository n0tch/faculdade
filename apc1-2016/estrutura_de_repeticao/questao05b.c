#include<stdio.h>

void main(){
	int j, soma=0;
	printf("Informe o valor de j: ");
	scanf("%d", &j);

	for(int i=1; i<=j; i++){
		soma=0;
		for(int k=1; k<=i;k++){
			soma += k;
			printf("%d ", soma);
		}
		printf("\n");
	}
}
