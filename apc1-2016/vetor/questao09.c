#include<stdio.h>
#define tamanho 100

void main(){
	int vetor[tamanho], aux;

	for(int i =0; i<tamanho; i++){
		printf("Informa a posicao %d: ",i+1);
		scanf("%d", &vetor[i]);
	}

	for(int i=0;i<tamanho;i++){
		for(int j=0; j<tamanho;j++){
			if(vetor[j] > vetor[i]){
				aux = vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = aux;
			}
		}
	}

	for(int i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
}
