#include<stdio.h>
#define tamanho 5

void main(){
	int vetor[tamanho];
	for(int i=0; i<tamanho; i++){
		printf("Informe a posicao %d: ",i+1);
		scanf("%d", &vetor[i]);
	}

	printf("Valores positivos do vetor: ");
	for(int i=0; i<tamanho; i++){
		if(vetor[i] >= 0){
			printf("%d ", vetor[i]);
		}
	}
	printf("\n");
}
