#include<stdio.h>
#define tamanho 5

void main(){
	int vetor1[tamanho], vetor2[tamanho];

	for(int i=0;i<tamanho; i++){
		printf("Informe a posicao %d: ",i+1);
		scanf("%d", &vetor1[i]);

		if(vetor1[i] == 0){
			vetor2[i] = 1;
		}else{
			vetor2[i] = vetor1[i];
		}
	}

	printf("Vetor 1:\n");
	for(int i=0; i<tamanho; i++){
		printf("%d ",vetor1[i]);
	}
	printf("\nVetor 2:\n");
	for(int i=0;i<tamanho; i++){
		printf("%d ", vetor2[i]);
	}
	printf("\n");
}
