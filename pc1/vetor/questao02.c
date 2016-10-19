#include<stdio.h>
#define TAM 10

void alimenta_matriz(int vet[TAM]){
	for(int i=0;i<TAM; i++){
		printf("Posicao %d: ", i+1);
		scanf("%d", &vet[i]);
	}
}

void main(){

	int vet1[TAM], vet2[TAM], vet3[TAM];

	printf("--Vetor 01--\n");
	alimenta_matriz(vet1);

	printf("--Vetor 02--\n");
	alimenta_matriz(vet2);

	printf("--Vetor Resultante--\n");
	for(int i=0;i<TAM; i++){
		vet3[i] = vet1[i]*vet2[i];
		printf("[%d] * [%d] = %d\n", vet1[i], vet2[i], vet3[i]);
	}
}
