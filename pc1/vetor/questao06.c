#include<stdio.h>
#define TAM 10

void main(){

	float vet[TAM];
	float maior = 0;

	for(int i=0; i<TAM; i++){
		printf("Informe a posicao %d: ", i+1);
		scanf("%f", &vet[i]);

		if(i==0)
			maior = vet[i];
		else if(maior < vet[i])
			maior = vet[i];
	}

	printf("Maior valor: %.2f\n", maior);
	for(int i=0; i<TAM; i++){
		vet[i] /= maior;
		printf("%.2f ", vet[i]);
	}
	printf("\n");
}
