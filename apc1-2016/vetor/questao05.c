#include<stdio.h>

void main(){
	int vetorA[10], vetorB[10], result[10];

	for(int i=0; i<10;i++){
		printf("Informe a posicao %d do vetor A: ", i+1);
		scanf("%d", &vetorA[i]);

		printf("Informe a posicao %d do vetor B: ",i+1);
		scanf("%d", &vetorB[i]);

		result[i] = vetorA[i] * vetorB[i];
		printf("\n");
	}

	for(int i=0;i<10; i++){
		printf("Vetor resultante: %d\n", result[i]);
	}
}
