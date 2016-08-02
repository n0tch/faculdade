#include<stdio.h>

void main(){
	int n, soma=1;
	printf("Informe o valor de n: ");
	scanf("%d", &n);

	while(n != 0){
		soma += n;
		n--;
	}

	printf("%d\n", soma);
}
