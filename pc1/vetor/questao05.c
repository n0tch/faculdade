#include<stdio.h>
#define TAM 50

void print(int vet[]){
	printf("---Ordem original---\n");
	for(int i=0; i<TAM; i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
}

void print_inverso(int vet[]){
	printf("---Ordem inversa---\n");
	for(int i=TAM-1; i>=0; i--){
		printf("%d ", vet[i]);
	}
	printf("\n");
}

void main(){

	int vet[TAM] = {0};
	int cod;

	printf("Informe o codigo: ");
	scanf("%d", &cod);

	printf("---Alimente o vetor---\n");
	for(int i=0; i<TAM; i++){
		printf("Posicao %d: ", i+1);
		scanf("%d", &vet[i]);
	}

	switch(cod){
		case 1:
			print(vet);
			break;
		case 2:
			print_inverso(vet);
			break;
		default:
			printf("Operacao invalida!\n");
	}
}
