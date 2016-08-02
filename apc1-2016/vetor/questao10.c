#include<stdio.h>
#define tamanho 6

void main(){
	int vetor[tamanho], aux;
	for(int i =0; i<tamanho; i++){
		printf("Informe a posicao %d: ", i+1);
		scanf("%d",&vetor[i]);
	}

	for(int i=0;i<tamanho/2; i++){
		aux = vetor[i];
		vetor[i] = vetor[(tamanho-1)-i];
		vetor[(tamanho-1)-i] = aux;
	}

	for(int i =0; i<tamanho; i++){
		printf("%d ", vetor[i]);
	}

	printf("\n");
}
