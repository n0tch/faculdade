/*
Faça uma função que lê 50 valores inteiros e retorna o maior e o menor deles
*/

#include<stdio.h>
#define TAM 10

void vet_maior_menor(int *maior, int *menor){

	int vetor[TAM];

	for(int i=0; i<TAM; i++){
		printf("Informe o %d valor: ", i+1);
		scanf("%d", &vetor[i]);

		if(i==0){
			*maior = vetor[i];
			*menor = vetor[i];
		}else if(vetor[i] > *maior){
			*maior = vetor[i];
		}else if(vetor[i] < *menor){
			*menor = vetor[i];
		}
	}
}

int main(){

	int maior, menor;

	vet_maior_menor(&maior, &menor);
	printf("Maior valor informado: %d\n", maior);
	printf("Menor valor informado: %d\n", menor);

	return 0;
}
