#include<stdio.h>
#define TAM 5

void main(){

	int vet[TAM] = {0};
	int aux;

	for(int i=0; i<TAM; i++){
		printf("Informe a posicao %d: ", i+1);
		scanf("%d", &vet[i]);
	}

	//ordenar
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			if(vet[i] < vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}

	//mostrar vetor ordenado
	printf("\n");
	for(int i=0; i<TAM; i++){
		printf("%d ", vet[i]);
	}

	printf("\n");
}
