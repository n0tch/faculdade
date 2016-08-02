#include<stdio.h>

void main(){
	int b,e,i=1,j=1;
	printf("Informe a base: ");
	scanf("%d", &b);
	printf("Informe o expoente: ");
	scanf("%d", &e);

	while(i<=e){
		j = (j*b);
		i++;
	}

	printf("Resultado: %d\n", j);
}
