#include<stdio.h>

void main(){
	int n, soma=0;
	printf("Informe o valor do n: ");
	scanf("%d",&n);

	while(n != 0){
		soma+=n;
		printf("Soma: %d\n", soma);
		n--;
	}

	printf("N: %d\n", soma);
}
