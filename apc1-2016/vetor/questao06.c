#include<stdio.h>

void main(){
	int vetor[10], A;
	printf("Informe o valor do A: ");
	scanf("%d", &A);

	for(int i=0; i<20; i++){
		printf("Informe a entrada %d do vetor: ", i+1);
		scanf("%d", &vetor[i]);

		vetor[i] *= A;
	}

	for(int i=0; i<20; i++){
		printf("Vetor multiplicado por A: %d\n", vetor[i]);
	}
}
